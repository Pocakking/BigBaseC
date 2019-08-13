#ifndef __BIGBASEC_HOOK_H
#define __BIGBASEC_HOOK_H

typedef struct GtaThread GtaThread;
typedef struct GtaThreadVtbl GtaThreadVtbl;

struct GtaThreadVtbl
{
	void *(*__vecDelDtor)(GtaThread *this, unsigned int);
	int(*Reset)(GtaThread *this, uint32_t scriptHash, void *args, uint32_t arg_count);
	int(*Run)(GtaThread *this);
	int(*Tick)(GtaThread *this, uint32_t ops_to_execute);
	void(*Kill)(GtaThread *this);
};

struct GtaThread
{
	GtaThreadVtbl *vfptr;
	uint32_t thread_id;
	uint32_t script_hash;
};

GtaThread *get_current_script_thread();
GtaThread *set_current_script_thread(GtaThread *thread);

void initialize_hook(void *scan_base, size_t scan_length);
void uninitialize_hook();

#endif
