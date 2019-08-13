#ifndef __BIGBASEC_INVOKER_H
#define __BIGBASEC_INVOKER_H

typedef struct scrNativeCallContext
{
	uint64_t *result;
	uint32_t arg_count;
	uint64_t *arguments;
	uint32_t data_count;
	uint8_t data[0xC0];
} scrNativeCallContext;

typedef struct scrNativeRegistrationTable scrNativeRegistrationTable;
typedef void(*scrNativeHandler)(scrNativeCallContext*);
typedef uint64_t scrNativeHash;

typedef struct native_cache_entry
{
	scrNativeHash hash;
	scrNativeHandler handler;
	struct native_cache_entry *next;
} native_cache_entry;

typedef struct native_cache
{
	native_cache_entry *entries[0x100];
} native_cache;

void native_cache_init(native_cache *this);

void native_cache_uninit(native_cache *this);

scrNativeHandler native_cache_get(native_cache *this, scrNativeHash hash);

void native_cache_set(native_cache *this, scrNativeHash hash, scrNativeHandler handler);

extern native_cache g_native_cache;

typedef struct invoker_context
{
	scrNativeCallContext base;
	uint64_t result_stack[3];
	uint64_t argument_stack[64];
} invoker_context;

extern invoker_context g_context;
extern scrNativeHash g_hash;

void initialize_invoker(void *scan_base, size_t scan_length);

void populate_native_cache();

FORCEINLINE void native_init(scrNativeHash hash)
{
	g_hash = hash;

	g_context.base.arg_count = 0;
	g_context.base.data_count = 0;
}

FORCEINLINE void native_push(uint64_t value)
{
	g_context.argument_stack[g_context.base.arg_count++] = value;
}

DECLSPEC_NOINLINE void *native_call();

typedef uint32_t Any;
typedef uint32_t Hash;
typedef int Entity;
typedef int Player;
typedef int Ped;
typedef int Vehicle;
typedef int Cam;
typedef int Pickup;
typedef int Object;
typedef int Blip;
typedef int Camera;
typedef int ScrHandle;

typedef struct Vector3
{
	float x;
	char pad1[4];
	float y;
	char pad2[4];
	float z;
	char pad3[4];
} Vector3;

#endif
