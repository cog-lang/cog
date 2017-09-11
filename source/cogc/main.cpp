// main.cpp

#include "runtime/runtime.h"

#include <string.h>

using namespace cog;


namespace cogc
{
	struct Parser;
	struct SyntaxImpl;

	typedef SyntaxImpl* (*SyntaxCallback)(Parser* parser);

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

	//

	inline void cogAssert(bool condition)
	{
		assert(condition);
	}
}

#include "cogc.cog.cpp"

int main(int argc, char** argv)
{
	cogc::init();

	return cogc::main(argc, argv);
}