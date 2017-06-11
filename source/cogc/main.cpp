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

	//

	class Decl;
	class Specializations;
	class SpecializedDecl;
	struct CompactDeclRef;

	struct DeclRefVal
	{
		Decl* decl;
		Specializations* specializations;

		DeclRefVal()
		{
			this->decl = nullptr;
			this->specializations = nullptr;
		}

		explicit DeclRefVal(
			Decl* decl)
		{
			this->decl = decl;
			this->specializations = nullptr;
		}

		DeclRefVal(
			Decl* decl,
			Specializations* specializations)
		{
			this->decl = decl;
			this->specializations = specializations;
		}

		DeclRefVal(
			CompactDeclRef const& declRef);

		Decl* getDecl() { return decl; }
		Specializations* getSpecializations() { return specializations; }
	};

	template<typename T>
	struct DeclRefValImpl : DeclRefVal
	{
		DeclRefValImpl()
			: DeclRefVal(nullptr, nullptr)
		{}

		DeclRefValImpl(
			T* decl,
			Specializations* specializations)
			: DeclRefVal(decl, specializations)
		{}

		template<typename U>
		DeclRefValImpl(
			DeclRefValImpl<U> const& other,
			T* t = (U*)0)
			: DeclRefVal(other.decl, other.specializations)
		{}

		T* getDecl() { return (T*) decl; }

		operator T*() { return getDecl(); };
	};


	struct CompactDeclRef
	{
		Object* value;

		CompactDeclRef()
		{
			this->value = nullptr;
		}

		CompactDeclRef(Decl* decl)
		{
			this->value = (Object*) decl;
		}

		CompactDeclRef(SpecializedDecl* specialized)
		{
			this->value = (Object*) specialized;
		}

		CompactDeclRef(DeclRefVal const& declRef);

		Decl* getDecl() { return DeclRefVal(*this).getDecl(); }
		Specializations* getSpecializations() { return DeclRefVal(*this).getSpecializations(); }

	};

	template<typename T>
	DeclRefValImpl<T> as(DeclRefVal const& declRef)
	{
		return DeclRefValImpl<T>(
			as<T>(declRef.decl),
			declRef.specializations);
	}

	template<typename T>
	DeclRefValImpl<T> as(CompactDeclRef const& declRef)
	{
		return as<T>(DeclRefVal(declRef));
	}
}

#ifdef COGC_BOOTSTRAP
#include "cogc_bootstrap.cog.cpp"
#else
#include "cogc.cog.cpp"
#endif

namespace COGC_NAMESPACE
{
	DeclRefVal::DeclRefVal(
		CompactDeclRef const& declRef)
	{
		auto value = declRef.value;
		if(auto specializedDecl = as<SpecializedDecl>(value))
		{
			this->decl = specializedDecl->decl;
			this->specializations = specializedDecl->specializations;
		}
		else
		{
			auto declVal = as<Decl>(value);
			this->decl = declVal;
			this->specializations = nullptr;
		}
	}

	CompactDeclRef::CompactDeclRef(DeclRefVal const& declRef)
	{
		auto specializations = declRef.specializations;
		if(!specializations)
		{
			this->value = declRef.decl;
		}
		else
		{
			auto specializedDecl = createObject<SpecializedDecl>();
			specializedDecl->decl = declRef.decl;
			specializedDecl->specializations = declRef.specializations;
			this->value = specializedDecl;
		}
	}
}

int main(int argc, char** argv)
{
	return COGC_NAMESPACE::main(argc, argv);
}