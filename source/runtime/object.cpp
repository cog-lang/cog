// object.cpp
#include "object.h"

#include <string.h>

namespace cog {


ObjectImpl::StaticClass ObjectImpl::staticClass = {
	"cogc::Object",
	sizeof(cog::ObjectImpl),
	0,
};

bool isSubClass(Class* sub, Class* sup)
{
	while(sub)
	{
		if(sub == sup)
			return true;

		sub = sub->base;
	}
	return false;
}

void* as(Object obj, Class* clazz)
{
	if(!obj || !isSubClass(obj->directClass, clazz))
		return 0;
	return obj;
}

Object createObject(Class* directClass)
{
	size_t size = directClass->instanceSize;
	Object obj = (Object) malloc(size*4);
	memset(obj, 0, size);
	obj->directClass = directClass;
	return obj;
}

struct RegisteredClass
{
	Class*				clazz;
	RegisteredClass*	next;
};

static RegisteredClass* gRegisteredClasses = nullptr;

void registerClass(Class* clazz)
{
	RegisteredClass* reg = new RegisteredClass();
	reg->clazz = clazz;

	reg->next = gRegisteredClasses;
	gRegisteredClasses = reg;
}

Class* findClassByName(char const* name)
{
	for (auto rr = gRegisteredClasses; rr; rr = rr->next)
	{
		if (strcmp(rr->clazz->name, name) == 0)
			return rr->clazz;
	}

	return nullptr;
}

}