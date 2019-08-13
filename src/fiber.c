#include "fiber.h"

void fiber_init(fiber *this, void(*function)())
{
	this->script_fiber = CreateFiber(0, (LPFIBER_START_ROUTINE)function, this);
	this->function = function;
	this->wake_at = GetTickCount();
}

void fiber_uninit(fiber *this)
{
	if (this->script_fiber)
	{
		DeleteFiber(this->script_fiber);
	}
}

void fiber_tick(fiber *this)
{
	if (this->wake_at <= GetTickCount())
	{
		this->main_fiber = IsThreadAFiber() ? GetCurrentFiber() : ConvertThreadToFiber(NULL);

		SwitchToFiber(this->script_fiber);
	}
}

void fiber_yield(fiber *this, uint32_t time)
{
	this->wake_at = GetTickCount() + time;

	SwitchToFiber(this->main_fiber);
}

fiber *get_current_fiber()
{
	return (fiber*)(GetFiberData());
}
