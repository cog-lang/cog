// diagnosticdefs.h

#ifndef DIAGNOSTIC
#error Define DIAGNOSTIC before including this file.
#endif

DIAGNOSTIC(Error, unexpectedCharacter, "unexpected character '$0'")
DIAGNOSTIC(Error, unexpectedToken, "unexpected $0")
DIAGNOSTIC(Error, unexpectedTokenExpectedToken, "unexpected $0, expected $1")
DIAGNOSTIC(Error, unexpectedDeclName, "unexpected '$0', expected a declaration keyword")
DIAGNOSTIC(Fatal, unimplemented, "unimplemented: $0")

DIAGNOSTIC(Error, undefinedIdentifier, "undefined identifier '$0'")

DIAGNOSTIC(Error, failedToFindBuiltinType, "failed to find builtin type '$0'")

DIAGNOSTIC(Error, noOverloadCandidatesFound, "no overload candidates found for '$0'")
DIAGNOSTIC(Error, noMemberOfNameInType, "no member named '$0' in type '$1'")


DIAGNOSTIC(Error, ambiguousCallToOverload, "ambiguous call to '$0$1'")
DIAGNOSTIC(Error, noApplicableOverloadForCall, "no applicable overload for call to '$0$1'")
DIAGNOSTIC(Note, candidate, "candidate: $0")

DIAGNOSTIC(Error, cannotConvertType, "expected a value of type '$0', got '$1'")

DIAGNOSTIC(Note, debug, "$0")

DIAGNOSTIC(Warning, youMeanDot, "you mean dot here")

DIAGNOSTIC(Note, notGeneric, "not a generic ($0)")

#undef DIAGNOSTIC
