// runtime.h
#pragma once

#include <assert.h>
#include <stdint.h>
#include <stdio.h>

namespace cog
{
	typedef void		Void;
	typedef bool		Bool;
	typedef char		Char;

	typedef int 		CInt;

	typedef int8_t		Int8;
	typedef int16_t		Int16;
	typedef int32_t		Int32;
	typedef int64_t		Int64;

	typedef uint8_t		UInt8;
	typedef uint16_t	UInt16;
	typedef uint32_t	UInt32;
	typedef uint64_t	UInt64;

	typedef intptr_t	Int;
	typedef uintptr_t	UInt;

	typedef intptr_t	IntPtr;
	typedef uintptr_t	UIntPtr;

	typedef intptr_t	Size;
	typedef uintptr_t	USize;

	typedef size_t		SizeT;

	template<typename T>
	using Ptr = T*;

	template<typename T>
	using ConstPtr = T const*;

	template<typename T>
	using Ref = T&;

	template<typename T>
	using ConstRef = T const&;

	template<typename T>
	T& DEREF(T& val) { assert(&val); return val; }

	template<typename T>
	T& DEREF(T const& val) { assert(&val); return *(T*)&val; }

	template<typename T>
	T& DEREF(T* val) { assert(val); return *val; }

	template<typename T>
	T& DEREF(T const* val) { assert(val); return *(T*)val; }

	template<typename T>
	T& UNCONST(T& val) { assert(&val);  return val; }

	template<typename T>
	T& UNCONST(T const& val) { assert(&val); return *(T*)&val; }

	template<typename T>
	T* UNCONST(T* val) { assert(val); return val; }

	template<typename T>
	T* UNCONST(T const* val) { assert(val); return (T*)val; }

	void loadAndEval(char const* path);

	struct Class;


	void registerClass(Class* clazz);
	Class* findClassByName(char const* name);
}

#ifdef _MSC_VER
#define COG_EXPORT extern "C" __declspec(dllexport)
#else
#define COG_EXPORT extern "C"
#endif

#include "array.h"
#include "object.h"
#include "string.h"

namespace cog
{
	void print(char const* val);
	void print(String val);
	void print(Int val);
	void print(UInt val);
}

using namespace cog;
