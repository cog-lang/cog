// array.h
#ifndef COGC_ARRAY_H_INCLUDED
#define COGC_ARRAY_H_INCLUDED

#include <assert.h>
#include <stddef.h>
#include <stdint.h>
#include <new>

#include "object.h"

namespace cog {


// Storage for dynamically-allocated string objects
class ArrayStorage : public RefObject
{
public:
	char* end;
	char* limit;

	char* getBegin() { return (char*) (this + 1); }
	char* getEnd() { assert(end); return end; }
	char* getLimit() { assert(limit); return limit; }

	size_t getSize() { return getEnd() - getBegin(); }
	size_t getCapacity() { return getLimit() - getBegin(); }

	static ArrayStorage* allocateWithSizeAndCapacity(
		size_t size,
		size_t capacity);
	static ArrayStorage* allocateWithCapacity(size_t capacity);
	ArrayStorage* cloneWithCapacity(size_t capacity);
};

ArrayStorage* getEmptyArrayStorage();

template<typename T>
struct Array
{
	Array()
		: storage(getEmptyArrayStorage())
	{}

	T& operator[](size_t index)
	{
		return begin()[index];
	}

	T const& operator[](size_t index) const
	{
		return begin()[index];
	}

	T* begin()
	{
		if (!storage) return nullptr;
		return (T*) storage->getBegin();
	}

	T* end()
	{
		if (!storage) return nullptr;
		return (T*) storage->getEnd();
	}

	T const* begin() const { return ignoreConst()->begin(); }
	T const* end() const { return ignoreConst()->end(); }

	size_t getCount()
	{
		return end() - begin();
	}

	void append(T const& element)
	{
		if (!storage) storage = getEmptyArrayStorage();

		size_t capacity = storage->getSize() + sizeof(T);
		ensureUniquelyReferencedWithCapacity(capacity);

		T* elementPtr = end();

		new(elementPtr) T(element);

		storage->end = (char*) (elementPtr+1);
	}

	void append(Array<T> const& elements)
	{
		for(auto ee : elements)
		{
			append(ee);
		}
	}

	void fastRemoveAt(size_t index)
	{
		ensureUniquelyReferenced();

		size_t count = getCount();
		assert(index < count);

		// swap with last item
		// TODO: use std::move?
		(*this)[index] = (*this)[count-1];

		storage->end = (char*) (end() - 1);
	}

	void removeAt(size_t index)
	{
		ensureUniquelyReferenced();

		size_t count = getCount();
		assert(index < count);

		for (size_t ii = index; (ii+1) < count; ++ii)
		{
			(*this)[ii] = (*this)[ii+1];
		}
		storage->end = (char*)(end() - 1);
	}

private:
	Array<T>* ignoreConst() const { return (Array<T>*) this; }

	RefPtr<ArrayStorage> storage;

	// ensure that we have only a single reference,
	// and that it has the given capacity...
	void ensureUniquelyReferencedWithCapacity(size_t capacity)
	{
		ArrayStorage* oldStorage = this->storage;
		if(isUniquelyReferenced(oldStorage))
		{
			size_t oldCapacity = oldStorage->getCapacity();
			if(oldCapacity >= capacity)
				return;
		}

		// Either it wasn't unique, or there wasn't enough capacity
		ArrayStorage* newStorage = oldStorage->cloneWithCapacity(capacity);

		storage = newStorage;		
	}

	void ensureUniquelyReferenced()
	{
		ensureUniquelyReferencedWithCapacity(storage->getSize());
	}
};

}

#endif
