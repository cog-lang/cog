// token.cpp
#include "token.h"

namespace cogc {

static char const* kTokenNames[] =
{
#define TOKEN(name, desc) desc,
#include "tokendefs.h"
};

char const* getTokenName(TokenCode code)
{
	return kTokenNames[code];
}

}
