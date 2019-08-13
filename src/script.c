#include "script.h"
#include "runtime.h"
#include "invoker.h"
#include "natives.h"

fiber g_main_fiber;

static void text_test()
{
	UI_SET_TEXT_COLOUR(255, 255, 255, 255);
	UI_SET_TEXT_SCALE(1.f, 1.f);
	UI_SET_TEXT_FONT(4);
	UI_SET_TEXT_DROP_SHADOW();
	UI_SET_TEXT_OUTLINE();

	UI_BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI_ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("BigBaseC");
	UI_END_TEXT_COMMAND_DISPLAY_TEXT(0.01f, 0.01f);
}

void script_main()
{
	populate_native_cache();

	while (1)
	{
		text_test();

		if (GetAsyncKeyState(VK_CONTROL) & 0x8000)
		{
			if (GetAsyncKeyState(VK_END) & 0x8000)
			{
				unload();
			}
		}

		fiber_yield(&g_main_fiber, 0);
	}
}

void init_script(void *scan_base, size_t scan_length)
{
	fiber_init(&g_main_fiber, &script_main);

	initialize_invoker(scan_base, scan_length);

	native_cache_init(&g_native_cache);
}

void uninit_script()
{
	native_cache_uninit(&g_native_cache);

	fiber_uninit(&g_main_fiber);
}
