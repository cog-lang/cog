// emit.h
#ifndef COGC_EMIT_H_INCLUDED
#define COGC_EMIT_H_INCLUDED

// Interface for emitting code

namespace cogc {

struct Session;

void emitModule(
	Session* session);

}

#endif
