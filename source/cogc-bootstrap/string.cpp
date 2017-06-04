// string.cpp
#include "string.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <new>

namespace cogc {

bool StringSpan::operator==(StringSpan other)
{
	size_t size = end - begin;
	size_t otherSize = other.end - other.begin;

	if(size != otherSize)
		return false;

	return memcmp(begin, other.begin, size) == 0;
}

bool StringSpan::operator!=(StringSpan other)
{
	return !(*this == other);
}

bool StringSpan::endsWith(StringSpan suffix)
{
	size_t len = getLength();
	size_t suffixLen = suffix.getLength();

	if(suffixLen > len) return false;

	return StringSpan(end - suffixLen, end) == suffix;
}

bool StringSpan::trimFromEnd(StringSpan suffix)
{
	if(!endsWith(suffix)) return false;

	size_t suffixLen = suffix.getLength();
	end -= suffixLen;
	return true;
}

StringSpan StringSpan::suffixAfterLast(char c)
{
	char const* cursor = end;
	while(cursor != begin)
	{
		--cursor;
		if(*cursor == c)
		{
			return StringSpan(cursor+1, end);
		}
	}
	return *this;
}


TerminatedStringSpan::TerminatedStringSpan(
	char const* begin)
	: StringSpan(begin, begin + strlen(begin))
{}

TerminatedStringSpan::TerminatedStringSpan(
	char* begin)
	: StringSpan(begin, begin + strlen(begin))
{}

StringSpan TerminatedStringSpan::asStringSpan()
{
	return StringSpan(begin, end);
}

// RefObject


// StringStorage

StringStorage* StringStorage::allocateWithSizeAndCapacity(
	size_t size,
	size_t capacity)
{
	assert(size <= capacity);
	size_t allocSize = sizeof(StringStorage) + capacity;

	StringStorage* result = (StringStorage*) malloc(allocSize);

	new(result) StringStorage();

	char* newBegin = result->getBegin();
	result->end = newBegin + size;
	result->limit = newBegin + capacity;

	return result;
}

StringStorage* StringStorage::allocateWithCapacity(size_t capacity)
{
	return allocateWithSizeAndCapacity(0, capacity);
}


StringStorage* StringStorage::cloneWithCapacity(size_t capacity)
{
	size_t newSize = getSize();
	if(newSize > capacity)
		newSize = capacity;

	StringStorage* result = allocateWithSizeAndCapacity(newSize, capacity);

	memcpy(result->getBegin(), this->getBegin(), newSize);

	return result;
}

static StringStorage* getEmptyStringStorage()
{
	static StringStorage* result = acquire(StringStorage::allocateWithCapacity(0));
	return result;
}

// String

String::String()
{
	storage = getEmptyStringStorage();
}


void String::append(char c)
{
	size_t capacity = storage->getSize() + 1;
	ensureUniquelyReferencedWithCapacity(capacity);

	*storage->end++ = c;
}

StringSpan String::asSpan()
{
	return StringSpan(storage->getBegin(), storage->getEnd());
}

String::operator StringSpan()
{
	return asSpan();
}

void String::ensureUniquelyReferencedWithCapacity(size_t capacity)
{
	StringStorage* oldStorage = this->storage;
	if(isUniquelyReferenced(oldStorage))
	{
		size_t oldCapacity = oldStorage->getCapacity();
		if(oldCapacity >= capacity)
			return;
	}

	// Either it wasn't unique, or there wasn't enough capacity
	StringStorage* newStorage = oldStorage->cloneWithCapacity(capacity);

	storage = newStorage;
}

}
