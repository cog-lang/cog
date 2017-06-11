// object.h
#ifndef COGC_OBJECT_H_INCLUDED
#define COGC_OBJECT_H_INCLUDED

#include <stdlib.h>

namespace cog {

struct Class
{
	char*		name;
	size_t 		instanceSize;
	Class*		base;
};

struct ObjectImpl
{
	typedef Class StaticClass;

	static StaticClass staticClass;

	Class* directClass;
};

typedef ObjectImpl* Object;

template<typename T>
struct ObjectClassImpl {};

template<>
struct ObjectClassImpl<Object> { typedef ObjectImpl Impl; };

#define COG_GET_CLASS(T) \
	((Class*) &ObjectClassImpl<T>::Impl::staticClass)

template<typename T>
Class* getClass()
{
	return COG_GET_CLASS(T);
}

bool isSubClass(Class* sub, Class* sup);
void* as(ObjectImpl* obj, Class* clazz);

template<typename T>
T as(ObjectImpl* obj)
{
	return (T) as(obj, getClass<T>());
}

ObjectImpl* createObject(Class* directClass);

template<typename T>
T createObject()
{
	return (T) createObject(getClass<T>());
}


#define COG_DECLARE_CLASS(C, Base) \
	static StaticClass staticClass;

#define COG_DEFINE_CLASS(C, Base) \
	C##Impl::StaticClass C##Impl::staticClass = { (char*) #C, sizeof(C##Impl), COG_GET_CLASS(Base) };

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
