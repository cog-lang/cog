// object.cpp
#include "object.h"

#include <string.h>

namespace cogc {


Object::StaticClass Object::staticClass = {
	(char*) "cogc::Object",
	sizeof(cogc::Object),
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

void* as(Object* obj, Class* clazz)
{
	if(!obj || !isSubClass(obj->directClass, clazz))
		return 0;
	return obj;
}

Object* createObject(Class* directClass)
{
	size_t size = directClass->instanceSize;
	Object* obj = (Object*) malloc(size);
	memset(obj, 0, size);
	obj->directClass = directClass;
	return obj;
}


}