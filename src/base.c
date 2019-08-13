#include "base.h"
#include "hook.h"
#include "script.h"

HMODULE g_hmod;
HANDLE g_uninject_thread;

void initialize(HMODULE hmod)
{
	HMODULE exe_hmod;
	IMAGE_DOS_HEADER *exe_dos_header;
	IMAGE_NT_HEADERS *exe_nt_header;

	void *scan_base;
	size_t scan_length;
	
	g_hmod = hmod;

	exe_hmod = GetModuleHandleA(NULL);
	exe_dos_header = (IMAGE_DOS_HEADER*)exe_hmod;
	exe_nt_header = (IMAGE_NT_HEADERS*)((char*)exe_hmod + exe_dos_header->e_lfanew);

	scan_base = (void*)exe_hmod;
	scan_length = exe_nt_header->OptionalHeader.SizeOfImage;

	init_script(scan_base, scan_length);
	initialize_hook(scan_base, scan_length);
}

DWORD WINAPI unload_thread(LPVOID lpThreadParameter)
{
	CloseHandle(g_uninject_thread);

	uninit_script();

	FreeLibraryAndExitThread(g_hmod, 0);
}

void unload()
{
	uninitialize_hook();

	g_uninject_thread = CreateThread(NULL, 0, &unload_thread, NULL, 0, NULL);
}
