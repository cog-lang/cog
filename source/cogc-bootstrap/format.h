// format.h
#pragma once

#include <stdio.h>

namespace cogc
{

struct Arg;
struct DeclRefVal;

void formatDeclRef(FILE* stream, DeclRefVal const& declRef);

void formatArgTypeList(FILE* stream, Arg* arg);

}