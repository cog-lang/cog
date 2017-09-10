// str.h
#ifndef COGC_STR_H_INCLUDED
#define COGC_STR_H_INCLUDED

#include <stddef.h>
#include <stdint.h>

#include "object.h"

namespace cog {

struct StringSpanData
{
    char const* begin;
    char const* end;
};

// A range of string data, without ownership
struct StringSpan
{
	StringSpan()
	{}

	StringSpan(
		char const* begin,
		char const* end)
		: begin(begin)
		, end(end)
	{}

    StringSpan(
        StringSpanData data)
        : begin(data.begin)
        , end(data.end)
    {}

    operator StringSpanData()
    {
        StringSpanData result = { begin, end };
        return result;
    }

    bool operator==(StringSpan other);
	bool operator!=(StringSpan other);

	// length in code units
	size_t getLength() { return end - begin; }

	// does this string end with the given suffix?
	bool endsWith(StringSpan suffix);

	// remove an instance of `suffix` from the end of this string, if present
	bool trimFromEnd(StringSpan suffix);

	// Take onyl the part of the string after the last occurence of `c`
	// (which is the whole string if there is no `c`)
	StringSpan suffixAfterLast(char c);

	char const* begin;
	char const* end;
};

// A string span known to be null-terminated
struct TerminatedStringSpan : StringSpan
{
	TerminatedStringSpan()
	{}

	TerminatedStringSpan(
		char const* begin,
		char const* end)
		: StringSpan(begin, end)
	{}
	
	TerminatedStringSpan(
		char const* begin);


	// HACK: here to support simplified codegen...
	TerminatedStringSpan(
		char* begin);


	// Conversion to base type, since cogc doesn't
	// currently understand struct subtyping
	StringSpan asStringSpan();
};

// Storage for dynamically-allocated string objects
class StringStorage : public RefObject
{
public:
	char* end;
	char* limit;

	char* getBegin() { return (char*) (this + 1); }
	char* getEnd() { return end; }
	char* getLimit() { return limit; }

	size_t getSize() { return getEnd() - getBegin(); }
	size_t getCapacity() { return getLimit() - getBegin(); }

	static StringStorage* allocateWithSizeAndCapacity(
		size_t size,
		size_t capacity);
	static StringStorage* allocateWithCapacity(size_t capacity);
	StringStorage* cloneWithCapacity(size_t capacity);
};

// actual heap-allocated string class
struct String
{
	String();
	String(char const* text);
	String(StringSpan text);

	void append(StringSpan text);
	void append(char c);

	void append(char const* text)
	{
		append(TerminatedStringSpan(text));
	}

	void append(String text)
	{
		append(text.asSpan());
	}

	StringSpan asSpan();

	operator StringSpan();

private:
	RefPtr<StringStorage> storage;

	// ensure that we have only a single reference,
	// and that it has the given capacity...
	void ensureUniquelyReferencedWithCapacity(size_t capacity);
};

inline bool operator==(String left, String right)
{
	return left.asSpan() == right.asSpan();
}

inline String operator+(String left, TerminatedStringSpan right)
{
	String result = left;
	result.append(right);
	return result;
}

}

#endif
