// object.h
#ifndef COGC_OBJECT_H_INCLUDED
#define COGC_OBJECT_H_INCLUDED

#include <stdlib.h>

namespace cogc {

struct Class
{
	char*		name;
	size_t 		instanceSize;
	Class*		base;
};

struct Object
{
	typedef Class StaticClass;

	static StaticClass staticClass;

	Class* directClass;
};

#define COGC_GET_CLASS(T) \
	((Class*) &T::staticClass)

template<typename T>
Class* getClass()
{
	return COGC_GET_CLASS(T);
}

bool isSubClass(Class* sub, Class* sup);
void* as(Object* obj, Class* clazz);

template<typename T>
T* as(Object* obj)
{
	return (T*) as(obj, getClass<T>());
}

Object* createObject(Class* directClass);

template<typename T>
T* createObject()
{
	return (T*) createObject(getClass<T>());
}


#define COGC_DECLARE_CLASS(C, Base) \
	static StaticClass staticClass;

#define COGC_DEFINE_CLASS(C, Base) \
	C::StaticClass C::staticClass = { (char*) #C, sizeof(C), COGC_GET_CLASS(Base) };

}




//


// basic implementation of reference-counting
class RefObject
{
public:
	uintptr_t referenceCount;
};

inline bool isUniquelyReferenced(RefObject* refObject)
{
	return refObject->referenceCount == 1;
}

inline void acquireReference(RefObject* object)
{
	// TODO: make this thread-safe
	object->referenceCount++;
}

inline void releaseReference(RefObject* object)
{
	// TODO: make this thread-safe
	--object->referenceCount;
	if(object->referenceCount == 0)
	{
		delete object;
	}
}

template<typename T>
T* acquire(T* obj)
{
	acquireReference(obj);
	return obj;
}

template<typename T>
class RefPtr
{
public:
	RefPtr()
		: object(nullptr)
	{}

	RefPtr(T* other)
		: object(nullptr)
	{
		assign(other);
	}	

	RefPtr(RefPtr<T> const& other)
		: object(nullptr)
	{
		assign(other.object);
	}

	// TODO: move constructors

	void operator=(T* object)
	{
		assign(object);
	}

	void operator=(RefPtr<T> const& other)
	{
		assign(other.object);
	}

	operator T*()
	{
		return object;
	}

	T* operator->()
	{
		return object;
	}

	T& operator*()
	{
		return *object;
	}

private:
	void assign(T* newObject)
	{
		T* oldObject = this->object;

		if(newObject)
			acquireReference(newObject);

		this->object = newObject;

		if(oldObject)
			releaseReference(oldObject);
	}

	T*	object;
};






#endif
