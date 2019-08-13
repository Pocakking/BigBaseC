#include "hook.h"
#include "pattern.h"
#include "script.h"
#include "runtime.h"

GtaThreadVtbl *thread_vftable;

GtaThread *get_current_script_thread()
{
	char *tls;

	tls = *(char**)__readgsqword(0x58);

	return *(GtaThread**)(tls + 0x830);
}

GtaThread *set_current_script_thread(GtaThread *thread)
{
	char *tls;
	GtaThread *original_thread;
	
	tls = *(char **)__readgsqword(0x58);

	original_thread = *(GtaThread**)(tls + 0x830);

	*(GtaThread**)(tls + 0x830) = thread;

	*(char*)(tls + 0x838) = thread != NULL;

	return original_thread;
}

int (*og_tick)(GtaThread *this, uint32_t ops_to_execute);
int hk_tick(GtaThread *this, uint32_t ops_to_execute)
{
	GtaThread *original_thread;

	switch (this->script_hash)
	{
	case 0x5700179C: /* main_persistent */

		original_thread = set_current_script_thread(this);

		fiber_tick(&g_main_fiber);

		set_current_script_thread(original_thread);

		break;
	}

	return og_tick(this, ops_to_execute);
}

void initialize_hook(void *scan_base, size_t scan_length)
{
	char *ptr;
	DWORD og_protect;

	ptr = find_pattern(scan_base, scan_length,
		"\x48\x83\xA3\x10\x01\x00\x00\x00\x48\x8D\x05\x00\x00\x00\x00\x48\x8B\xCB",
		"xxxxxxxxxxx????xxx");

	if (!ptr)
	{
		big_error("Failed to find GtaThread vftable pattern.");
	}

	/* Read as RIP-relative offset */
	ptr += 11;
	ptr += *(int32_t*)(ptr) + sizeof(int32_t);
	thread_vftable = (GtaThreadVtbl*)ptr;

	VirtualProtect(thread_vftable, sizeof(GtaThreadVtbl), PAGE_READWRITE, &og_protect);
	{
		og_tick = thread_vftable->Tick;
		thread_vftable->Tick = &hk_tick;
	}
	VirtualProtect(thread_vftable, sizeof(GtaThreadVtbl), og_protect, NULL);
}

void uninitialize_hook()
{
	DWORD og_protect;

	VirtualProtect(thread_vftable, sizeof(GtaThreadVtbl), PAGE_READWRITE, &og_protect);
	{
		thread_vftable->Tick = og_tick;
	}
	VirtualProtect(thread_vftable, sizeof(GtaThreadVtbl), og_protect, NULL);
}
