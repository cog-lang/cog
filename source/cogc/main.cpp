// main.cpp

#include "runtime/runtime.h"

#include <string.h>

using namespace cog;


#ifdef COGC_BOOTSTRAP
#define COGC_NAMESPACE cogc_bootstrap
#else
#define COGC_NAMESPACE cogc
#endif

namespace COGC_NAMESPACE
{
	struct Parser;
	struct Syntax;

	typedef Syntax* (*SyntaxCallback)(Parser* parser);

	template<int N, typename T>
	struct FixedSizeArray
	{
		T _elements[N];

		T& operator[](int index) { return _elements[index]; }
		operator T*() { return _elements; }
	};

	template<typename T, typename U>
	T cast(U const& val)
	{
		return (T)val;
	}

	template<typename T>
	size_t sizeOf()
	{
		return sizeof(T);
	}

	template<typename T>
	T* alloc()
	{
		return new T();
	}
}

#ifdef COGC_BOOTSTRAP
#include "cogc_bootstrap.cog.cpp"
#else
#include "cogc.cog.cpp"
#endif

int main(int argc, char** argv)
{
	return COGC_NAMESPACE::main(argc, argv);
}