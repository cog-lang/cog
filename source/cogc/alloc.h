// alloc.h
#ifndef COGC_ALLOC_H_INCLUDED
#define COGC_ALLOC_H_INCLUDED

#include <stdlib.h>

#define COGC_ALLOC(T) \
	((T*) malloc(sizeof(T)))

#define COGC_FREE(ptr) \
	(free((void*) ptr))

#endif
