// format.cpp
#include "format.h"

#include "name.h"
#include "syntax.h"

#include <assert.h>

namespace cogc
{

void emit(FILE* stream, char const* text)
{
	fputs(text, stream);
}

void emit(FILE* stream, Name* name)
{
    emit(stream, getText(name).begin);
}

void formatExpr(FILE* stream, Exp* expr)
{
    {
        emit(stream, "<expr>");
    }
}

void formatVal(FILE* stream, Val* val)
{
    {
        emit(stream, "<val>");
    }
}


}