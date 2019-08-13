#ifndef __BIGBASEC_FIBER_H
#define __BIGBASEC_FIBER_H

typedef struct fiber
{
	void *script_fiber;
	void *main_fiber;
	void (*function)();
	uint32_t wake_at;
} fiber;

void fiber_init(fiber *this, void(*function)());
void fiber_uninit(fiber *this);
void fiber_tick(fiber *this);
void fiber_yield(fiber *this, uint32_t time);

fiber *get_current_fiber();

inline void WAIT(uint32_t time)
{
	fiber_yield(get_current_fiber(), time);
}

#endif
