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
	class SyntaxImpl;

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

	class DeclImpl;
	class SpecializationsImpl;
	class SpecializedDeclImpl;
	struct CompactDeclRef;

	struct DeclRefVal
	{
		DeclImpl* decl;
		SpecializationsImpl* specializations;

		DeclRefVal()
		{
			this->decl = nullptr;
			this->specializations = nullptr;
		}

		explicit DeclRefVal(
			DeclImpl* decl)
		{
			this->decl = decl;
			this->specializations = nullptr;
		}

		DeclRefVal(
			DeclImpl* decl,
			SpecializationsImpl* specializations)
		{
			this->decl = decl;
			this->specializations = specializations;
		}

		DeclRefVal(
			CompactDeclRef const& declRef);

		DeclImpl* getDecl() { return decl; }
		SpecializationsImpl* getSpecializations() { return specializations; }
	};

	template<typename T>
	struct DeclRefValImpl : DeclRefVal
	{
		DeclRefValImpl()
			: DeclRefVal(nullptr, nullptr)
		{}

		DeclRefValImpl(
			T decl,
			SpecializationsImpl* specializations)
			: DeclRefVal(decl, specializations)
		{}

		template<typename U>
		DeclRefValImpl(
			DeclRefValImpl<U> const& other,
			T t = (U)0)
			: DeclRefVal(other.decl, other.specializations)
		{}

		T getDecl() { return (T) decl; }

		operator T() { return getDecl(); };
	};


	struct CompactDeclRef
	{
		ObjectImpl* value;

		CompactDeclRef()
		{
			this->value = nullptr;
		}

		CompactDeclRef(DeclImpl* decl)
		{
			this->value = (ObjectImpl*) decl;
		}

		CompactDeclRef(SpecializedDeclImpl* specialized)
		{
			this->value = (ObjectImpl*) specialized;
		}

		CompactDeclRef(DeclRefVal const& declRef);

		DeclImpl* getDecl() { return DeclRefVal(*this).getDecl(); }
		SpecializationsImpl* getSpecializations() { return DeclRefVal(*this).getSpecializations(); }

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