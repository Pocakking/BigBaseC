#include "base.h"
#include <Shlwapi.h>

int _fltused;

HANDLE g_heap;

void *allocate(size_t size)
{
	return HeapAlloc(g_heap, 0, size);
}

void deallocate(void *mem)
{
	HeapFree(g_heap, 0, mem);
}

void big_error(const char *fmt, ...)
{
	va_list args;

	char buffer[512];

	va_start(args, fmt);

	wvnsprintfA(buffer, sizeof(buffer), fmt, args);

	MessageBoxA(NULL, fmt, "BigBaseC Error", MB_ICONSTOP);

	ExitProcess(0);

	va_end(args);
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReversed)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		g_heap = HeapCreate(0, 0, 0);

		if (!g_heap)
		{
			return FALSE;
		}

		initialize(hinstDLL);

		break;
	case DLL_PROCESS_DETACH:

		HeapDestroy(g_heap);

		break;
	}

	return TRUE;
}
