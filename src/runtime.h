#ifndef __BIGBASEC_RUNTIME_H
#define __BIGBASEC_RUNTIME_H

#include "base.h"

void *allocate(size_t size);
void deallocate(void *mem);

void big_error(const char *fmt, ...);

#endif
