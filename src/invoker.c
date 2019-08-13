#include "invoker.h"
#include "pattern.h"
#include "runtime.h"

typedef scrNativeHandler(*get_native_handler_t)(scrNativeRegistrationTable *this, scrNativeHash hash);
typedef void(*set_data_results_t)(scrNativeCallContext *this);

scrNativeRegistrationTable *native_registration_table;
get_native_handler_t get_native_handler;
set_data_results_t set_data_results;

native_cache g_native_cache;

void native_cache_init(native_cache *this)
{
	size_t i;
	for (i = 0; i < sizeof(this->entries) / sizeof(*this->entries); ++i)
	{
		this->entries[i] = NULL;
	}
}

void native_cache_uninit(native_cache *this)
{
	size_t i;
	native_cache_entry *entry;
	native_cache_entry *next;

	for (i = 0; i < sizeof(this->entries) / sizeof(*this->entries); ++i)
	{
		entry = this->entries[i];

		while (entry)
		{
			next = entry->next;

			deallocate(entry);

			entry = next;
		}
	}
}

scrNativeHandler native_cache_get(native_cache *this, scrNativeHash hash)
{
	native_cache_entry *entry;
	
	entry = this->entries[hash & 0xFF];

	while (entry)
	{
		if (entry->hash == hash)
		{
			return entry->handler;
		}

		entry = entry->next;
	}

	return NULL;
}

void native_cache_set(native_cache *this, scrNativeHash hash, scrNativeHandler handler)
{
	native_cache_entry *entry;

	entry = allocate(sizeof(native_cache_entry));

	entry->hash = hash;

	entry->handler = handler;

	entry->next = this->entries[hash & 0xFF];

	this->entries[hash & 0xFF] = entry;
}

invoker_context g_context;
scrNativeHash g_hash;

void initialize_invoker(void *scan_base, size_t scan_length)
{
	char *ptr;

	ptr = find_pattern(scan_base, scan_length,
		"\x76\x32\x48\x8B\x53\x40\x48\x8D\x0D",
		"xxxxxxxxx");

	if (!ptr)
	{
		big_error("Failed to find native invoker pattern.");
	}

	/* Read as RIP-relative offset */
	get_native_handler = (get_native_handler_t)(ptr + 18 + *(int32_t*)(ptr + 18) + sizeof(int32_t));
	native_registration_table = (scrNativeRegistrationTable*)(ptr + 9 + *(int32_t*)(ptr + 9) + sizeof(int32_t));

	ptr = find_pattern(scan_base, scan_length,
		"\x83\x79\x18\x00\x48\x8B\xD1\x74\x4A",
		"xxxxxxxxx");

	if (!ptr)
	{
		big_error("Failed to find set data results pattern.");
	}

	set_data_results = (set_data_results_t)ptr;

	g_context.base.result = &g_context.result_stack[0];
	g_context.base.arguments = &g_context.argument_stack[0];
}

void populate_native_cache()
{
	HANDLE file;
	LARGE_INTEGER file_size;

	size_t num_natives;
	size_t i;

	scrNativeHash hashes[2];
	scrNativeHandler handler;

	file = CreateFileA("BigBaseC-Crossmap.bin", GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

	if (!file)
	{
		big_error("Failed to open crossmap file.");
	}

	if (!GetFileSizeEx(file, &file_size))
	{
		big_error("Failed to get size of crossmap file.");
	}

	if (!ReadFile(file, &num_natives, sizeof(num_natives), NULL, NULL))
	{
		big_error("Failed to read number of natives in crossmap file.");
	}

	SetFilePointer(file, 8, NULL, FILE_CURRENT);

	for (i = 0; i < num_natives; ++i)
	{
		if (!ReadFile(file, hashes, sizeof(hashes), NULL, NULL))
		{
			big_error("Failed to read hash pair %d of crossmap file.", (int)i);
		}

		handler = get_native_handler(native_registration_table, hashes[1]);

		native_cache_set(&g_native_cache, hashes[0], handler);
	}

	CloseHandle(file);
}

void *native_call()
{
	scrNativeHandler handler;

	handler = native_cache_get(&g_native_cache, g_hash);

	if (!handler)
	{
		big_error("Failed to find native 0x%016llX", g_hash);
	}

	handler(&g_context.base);

	set_data_results(&g_context.base);

	return &g_context.result_stack[0];
}
