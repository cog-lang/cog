// array.cpp
#include "array.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <new>

namespace cog {

// ArrayStorage

ArrayStorage* getEmptyArrayStorage()
{
	static ArrayStorage* result = acquire(ArrayStorage::allocateWithCapacity(0));
	return result;
}

ArrayStorage* ArrayStorage::allocateWithSizeAndCapacity(
	size_t size,
	size_t capacity)
{
	assert(size <= capacity);
	size_t allocSize = sizeof(ArrayStorage) + capacity;

	ArrayStorage* result = (ArrayStorage*) malloc(allocSize);

	new(result) ArrayStorage();

	char* newBegin = result->getBegin();
	result->end = newBegin + size;
	result->limit = newBegin + capacity;

	return result;
}

ArrayStorage* ArrayStorage::allocateWithCapacity(size_t capacity)
{
	return allocateWithSizeAndCapacity(0, capacity);
}


ArrayStorage* ArrayStorage::cloneWithCapacity(size_t capacity)
{
	size_t newSize = getSize();
	if(newSize > capacity)
		newSize = capacity;

	ArrayStorage* result = allocateWithSizeAndCapacity(newSize, capacity);

	memcpy(result->getBegin(), this->getBegin(), newSize);

	return result;
}

}
