#ifndef __BIGBASEC_SCRIPT_H
#define __BIGBASEC_SCRIPT_H

#include "fiber.h"

extern fiber g_main_fiber;

void init_script(void *scan_base, size_t scan_length);
void uninit_script();

#endif
