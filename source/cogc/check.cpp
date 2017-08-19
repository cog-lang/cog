// check.cpp
#include "check.h"

#include "diagnostic.h"
#include "format.h"
#include "name.h"
#include "scope.h"
#include "session.h"
#include "syntax.h"

#include <assert.h>
#include <stdio.h>


namespace cogc {

#if 0

struct SharedCheckContext
{
    Session*	session;
};

struct CheckContext
{
    SharedCheckContext* shared;
};

static DiagnosticSink* getSink(CheckContext* context)
{
	return &context->shared->session->sink;
}

static void checkDecls(
	CheckContext*	context,
	ContainerDecl*	containerDecl);

static void checkDecl(
	CheckContext*	context,
	Decl*			decl);


static Type* createFuncType(
    CheckContext*                   context,
    DeclRefValImpl<FuncDeclBase>    funcDeclRef)
{
    FuncType* funcType = COGC_ALLOC_SYNTAX(FuncType);
    return funcType;
}

static Type* getTypeForDeclRefImpl(
	CheckContext*   context,
	DeclRefVal      declRef)
{
    Decl* decl = declRef.getDecl();
    if(auto varDecl = as<VarDeclBase>(decl))
	{
		// TODO: need to force decl here?
		return specializeTypeForDeclRef(context, varDecl->type, declRef);
	}
	else if(auto aggTypeDecl = as<AggTypeDecl>(decl))
	{
        return createDeclRefTypeType(context, declRef);
	}
    else if(auto typeVarDecl = as<TypeVarDecl>(decl))
    {
        return createDeclRefTypeType(context, declRef);
    }
    else if(auto genericDecl = as<GenericDecl>(decl))
    {
        return createDeclRefTypeType(context, declRef);
    }
    else if(auto funcDeclRef = as<FuncDeclBase>(declRef))
    {
        return createFuncType(context, funcDeclRef);
    }
	else
	{
		assert(!"unimplemented");
        return 0;
	}
}

static Type* getTypeForDeclRef(
    CheckContext*   context,
    DeclRefVal      declRef)
{
    Type* result = getTypeForDeclRefImpl(context, declRef);
//    fprintf(stderr, "getTypeForDeclRef(%s) = ",
//        getText(declRef.decl->name).begin);
//    formatType(stderr, result);
//    fprintf(stderr, "\n");
    return result;
}

static Exp* checkExp(
	CheckContext*	context,
	Exp*			exp);

static Type* createErrorType(
    CheckContext*	context)
{
    return COGC_ALLOC_SYNTAX(ErrorType);
}

ModuleDecl* findOrImportModule(
    Session*    session,
    SourceLoc   loc,
    Name*       name);

static Type* getBuiltinType(
    CheckContext*   context,
    SourceLoc       loc,
    char const*     name)
{
    auto thetaModuleName = getName(context->shared->session, "theta");
    ModuleDecl* thetaModule = nullptr;
    if(context->shared->session->moduleDecl->name == thetaModuleName)
    {
        thetaModule = context->shared->session->moduleDecl;
    }
    else
    {
        thetaModule = findOrImportModule(context->shared->session, loc, thetaModuleName);        
    }

    TerminatedStringSpan nameSpan = TerminatedStringSpan(name);
    for(auto decl : thetaModule->getDecls())
    {
        if(decl->name && getText(decl->name) == nameSpan)
        {
            auto type = createObject<DeclRefType>();
            type->declRef = CompactDeclRef(decl);

            return type;
        }
    }

    diagnose(getSink(context), loc, kDiagnostic_failedToFindBuiltinType, name);
    return createErrorType(context);
}

static Type* getResultType(
    CheckContext*               context,
	DeclRefValImpl<PatternDecl>	decl)
{
    // TODO(tfoley): this should be simplified to
    // just use the `FuncDeclBaseRef`
	if(auto funcDeclRef = as<FuncDecl>(decl))
	{
		return funcDeclRef.getResultType();
	}
    else if(auto subscriptDeclRef = as<SubscriptDecl>(decl))
    {
        return subscriptDeclRef.getResultType();
    }
    else if(auto typeDeclRef = as<AggTypeDecl>(decl))
    {
        return createDeclRefType(context,
            CompactDeclRef(typeDeclRef));
    }
	else
	{
		// TODO: need to return the `Void` type...
        diagnose(getSink(context), decl.decl->loc, kDiagnostic_unimplemented, "result type");
		return 0;
	}
}

static Exp* createErrorExp(
    CheckContext*   context,
    Exp*            exp)
{
    exp->type = createErrorType(context);
    return exp;
}

static Exp* createErrorExp(
    CheckContext*	context,
    SourceLoc       loc)
{
    ErrorExp* exp = COGC_ALLOC_SYNTAX(ErrorExp);
    exp->loc = loc;
    return createErrorExp(context, exp);
}

bool isSameDeclRef(
    DeclRefVal const& left,
    DeclRefVal const& right);

static bool isSameType(
    Type*   left,
    Type*   right);

static bool isSameVal(
    Val*    left,
    Val*    right)
{
    #if 0
    if(auto leftTypeType = as<TypeType>(left->type))
    {
        if(auto rightTypeType = as<TypeType>(right->type))
        {
            return isSameType(
                leftTypeType->type,
                rightTypeType->type);
        }
    }
    #endif
    if(auto leftType = as<Type>(left))
    {
        if(auto rightType = as<Type>(right))
        {
            return isSameType(leftType, rightType);

        }
    }

    //

    assert(!"unimplemented");
    return false;
}

static bool isSameSpecializations(
    Specializations*    left,
    Specializations*    right)
{
    // Null specializations are equal.
    if(!left || !right)
        return left == right;

    if(!isSameDeclRef(
        left->genericDeclRef,
        right->genericDeclRef))
    {
        return false;
    }

    auto leftCursor = left->args.begin();
    auto rightCursor = right->args.begin();

    while(leftCursor != left->args.end())
    {
        auto leftArg = *leftCursor;
        auto rightArg = *rightCursor;

        if(!isSameVal(
            leftArg->value,
            rightArg->value))
        {
            return false;
        }


        ++leftCursor;
        ++rightCursor;
    }

    return true;
}


bool isSameDeclRef(
    DeclRefVal const& left,
    DeclRefVal const& right)
{
    if(left.decl != right.decl)
        return false;

    return isSameSpecializations(
        left.specializations,
        right.specializations);
}

static bool isSameType(
    Type*   left,
    Type*   right)
{
    if(left->directClass != right->directClass)
        return false;

    if(auto leftDeclRefType = as<DeclRefType>(left))
    {
        if(auto rightDeclRefType = as<DeclRefType>(right))
        {
            // check that they reference the same thing!
            if(isSameDeclRef(
                leftDeclRefType->declRef,
                rightDeclRefType->declRef))
            {
                return true;
            }
        }
    }

    return false;
}

static bool isError(
    Type*           type);

static bool isError(
    CheckContext*   context,
    Exp*            exp);

static bool tryCoerceImpl(
    CheckContext*   context,
    Exp*            fromExp,
    Type*           fromType,
    Exp**           toExp,
    Type*           toType)
{
    if(isSameType(fromType, toType))
    {
        if(toExp)
        {
            *toExp = fromExp;
        }

        return true;
    }

    if(isError(fromType) || isError(toType))
    {
        if(toExp)
        {
            *toExp = fromExp;
        }
        return true;
    }

//    fprintf(stderr, "FAILED: tryCoerceImpl(from:");
//    formatType(stderr, fromType);
//    fprintf(stderr, ", to:");
//    formatType(stderr, toType);
//    fprintf(stderr, ")\n");

    return false;
}

static bool tryCoerceImpl(
    CheckContext*   context,
    Exp*            fromExp,
    Exp**           toExp,
    Type*           toType)
{
    if(auto fromOverloadedExpr = as<OverloadedExpr>(fromExp))
    {
        // TODO: implement this case!
        throw 99;
    }
    else
    {
        return tryCoerceImpl(
            context,
            fromExp,
            fromExp->type,
            toExp,
            toType);
    }
}

static Exp* coerce(
    CheckContext*   context,
    Exp*            exp,
    Type*           type)
{
    Exp* result = nullptr;
    if(tryCoerceImpl(
        context,
        exp,
        &result,
        type))
    {
        return result;
    }

    diagnose(getSink(context), exp->loc, kDiagnostic_cannotConvertType, type, exp->type);
    return createErrorExp(context, exp);
}

static bool canCoerce(
    CheckContext*   context,
    Exp*            exp,
    Type*           type)
{
    return tryCoerceImpl(
        context,
        exp,
        nullptr,
        type);
}

struct OverloadCandidate
{
    enum State : int
    {
        Unchecked,
        GenericArgumentInferenceFailed,
        CheckedArity,
        CheckedTypes,
        Applicable,
    };

    State state;
    DeclRefVal declRef;
    Type*   resultType;
};

struct OverloadResolveContext
{
    enum class Mode : int
    {
        justTrying,
        forReal,
    };

    CheckContext*   checkContext;
    AppExpBase*     appExp;
    Exp*            baseExp = 0;
    Mode            mode = Mode::justTrying;

    // candidates being considered
    Array<OverloadCandidate>    candidates;
};

bool checkOverloadCandidateArity(
    OverloadResolveContext* context,
    OverloadCandidate&      candidate)
{
    auto& args = context->appExp->args;
    auto argCursor = args.begin();
    auto argEnd = args.end();

    if(auto funcDeclRef = as<FuncDeclBase>(candidate.declRef))
    {
        for(auto dd : funcDeclRef.getDecls())
        {
            if(auto paramDeclRef = as<ParamDecl>(dd))
            {
                if(!(argCursor != argEnd))
                {
                    // not enough args!
                    return false;
                }

                ++argCursor;
            }
            else
            {}
        }

        if(argCursor != argEnd)
        {
            // too many args!
            return false;
        }

        return true;
    }
    else
    {
        // TODO: other cases here?
        return false;
    }
}

bool checkOverloadCandidateTypes(
    OverloadResolveContext* context,
    OverloadCandidate&      candidate)
{
    auto& args = context->appExp->args;
    auto argCursor = args.begin();
    auto argEnd = args.end();

    if(auto funcDeclRef = as<FuncDeclBase>(candidate.declRef))
    {
        for(auto dd : funcDeclRef.getDecls())
        {
            if(auto paramDeclRef = as<ParamDecl>(dd))
            {
                if(!(argCursor != argEnd))
                {
                    assert(false);
                    // not enough args!
                    return false;
                }

                auto arg = *argCursor;
                auto& argExpr = arg->exp;

                auto paramType = paramDeclRef.getType();

                if(context->mode == OverloadResolveContext::Mode::justTrying)
                {
                    if(!canCoerce(
                        context->checkContext,
                        argExpr,
                        paramType))
                    {
                        return false;
                    }
                }
                else
                {
                    argExpr = coerce(
                        context->checkContext,
                        argExpr,
                        paramType);
                }

                ++argCursor;
            }
            else
            {}
        }

        if(argCursor != argEnd)
        {
            assert(false);
            // too many args!
            return false;
        }

        return true;
    }
    else
    {
        // TODO: other cases here?
        return false;
    }
}

bool checkOverloadCandidateDirections(
    OverloadResolveContext* context,
    OverloadCandidate&      candidate)
{
    return true;
}

void checkOverloadCandidateImpl(
    OverloadResolveContext*     context,
    OverloadCandidate&    candidate)
{
    // check arity
    candidate.state = OverloadCandidate::State::Unchecked;
    if(!checkOverloadCandidateArity(context, candidate))
        return;
    candidate.state = OverloadCandidate::State::CheckedArity;
    if(!checkOverloadCandidateTypes(context, candidate))
        return;
    candidate.state = OverloadCandidate::State::CheckedTypes;
    if(!checkOverloadCandidateDirections(context, candidate))
        return;
    candidate.state = OverloadCandidate::State::Applicable;

    // consider other costs...
}

void checkOverloadCandidate(
    OverloadResolveContext*     context,
    OverloadCandidate&    candidate)
{
    checkOverloadCandidateImpl(context, candidate);
//    fprintf(stderr, "CANDIDATE STATE: %d\n", (int) candidate.state);
}

int compareCandidates(
    OverloadCandidate&  left,
    OverloadCandidate&  right)
{
    // a higher state value is better (lower cost)
    if(left.state != right.state)
        return int(right.state) - int(left.state);

    // TODO: more detailed comparisons

    // otherwise they are un-ordered
    return 0;
}

void addCheckedOverloadCandidate(
    OverloadResolveContext* context,
    OverloadCandidate&      candidate)
{
    // We now need to filter our set of candidates,
    // and eliminate those that are strictly
    // worse than this one (we also can check if
    // is one is strictly worse than any)

    bool anyBetter = false;
    bool anyWorse = false;

    // Note: check count inside loop because we are
    // modifying it on the fly
    for(size_t ii = 0; ii < context->candidates.getCount(); ++ii)
    {
        int compareResult = compareCandidates(
            candidate,
            context->candidates[ii]);

//        fprintf(stderr, "COMPARE: %d\n", compareResult);

        if(compareResult < 0)
        {
//            fprintf(stderr, "REMOVING OLD: %d\n", (int)ii);
            // new candidate is better/cheaper
            context->candidates.fastRemoveAt(ii);

            anyBetter = true;

            // retry the same index, because of removal...
            --ii;
        }
        else if(compareResult > 0)
        {
//            fprintf(stderr, "SKIPPING NEW: %d\n", (int)ii);
            // old candidate is beter/cheaper
            anyWorse = true;
        }
    }

    if(anyWorse)
    {
        assert(!anyBetter);

        // our candidate was strictly worse
        // an at least one alternative,
        // so we should give up
        return;
    }

    // is candidate is worth looking at, it seems
    context->candidates.append(candidate);
}

void addOverloadCandidate(
    OverloadResolveContext* context,
    OverloadCandidate&      candidate)
{
    checkOverloadCandidate(context, candidate);
    addCheckedOverloadCandidate(context, candidate);
}

void addSubscriptOverloadCandidate(
    OverloadResolveContext*         context,
    DeclRefValImpl<SubscriptDecl>   declRef)
{
    // TODO: actually do stuff!

    OverloadCandidate candidate;
    candidate.declRef = declRef;
    candidate.resultType = getResultType(context->checkContext, declRef);

    addOverloadCandidate(context, candidate);
}

void addFuncOverloadCandidate(
    OverloadResolveContext*         context,
    DeclRefValImpl<FuncDeclBase>    declRef)
{
    OverloadCandidate candidate;
    candidate.declRef = declRef;
    candidate.resultType = getResultType(context->checkContext, declRef);

    addOverloadCandidate(context, candidate);
}

void addInitializerOverloadCandidate(
    OverloadResolveContext*         context,
    Type*                           type,
    DeclRefValImpl<InitializerDecl> declRef)
{
    OverloadCandidate candidate;
    candidate.declRef = declRef;
    candidate.resultType = type;
    addOverloadCandidate(context, candidate);
}

Exp* createDeclRefExp(
    CheckContext*   context,
    CompactDeclRef  declRef,
    SourceLoc       loc,
    Exp*            baseExp)
{
    DeclRefExp* declRefExp = 0;
    if(baseExp)
    {
        auto memberRefExp = createObject<MemberRefExp>();
        memberRefExp->base = baseExp;
        declRefExp = memberRefExp;
    }
    else
    {
        declRefExp = createObject<DeclRefExp>();
    }

    declRefExp->loc = loc;
    declRefExp->declRef = declRef;
    declRefExp->type = getTypeForDeclRef(context, declRef);
    return declRefExp;
}

Exp* createDeclRefExp(
    CheckContext*   context,
    DeclRefVal      declRef,
    SourceLoc       loc,
    Exp*            baseExp = 0)
{

    auto decl = declRef.getDecl();
    if(auto specializations = declRef.getSpecializations())
    {
        auto specializedDecl = createObject<SpecializedDecl>();
        specializedDecl->decl = decl;
        specializedDecl->specializations = specializations;

        return createDeclRefExp(context, CompactDeclRef(specializedDecl), loc, baseExp);
    }
    else
    {
        return createDeclRefExp(context, CompactDeclRef(decl), loc, baseExp);
    }
}

Exp* completeOverload(
    OverloadResolveContext* overloadContext)
{
    auto context = overloadContext->checkContext;
    auto appExp = overloadContext->appExp;

    size_t count = overloadContext->candidates.getCount();

    Name* baseName = nullptr;
    if(auto declRefExp = as<DeclRefExp>(appExp->base))
    {
        baseName = declRefExp->declRef.getDecl()->name;
    }
    else if(auto nameExp = as<NameExp>(appExp->base))
    {
        baseName = nameExp->name;
    }
    else if(auto overloadedExpr = as<OverloadedExpr>(appExp->base))
    {
        baseName = overloadedExpr->lookupResult.items[0].decl->name;
    }

    if(count == 1)
    {
        // exactly one best candidate found

        auto& candidate = overloadContext->candidates[0];
        if(candidate.state == OverloadCandidate::State::Applicable)
        {
            // we can use it!
            auto baseExp = createDeclRefExp(
                context,
                candidate.declRef,
                appExp->loc,
                overloadContext->baseExp);

            appExp->base = baseExp;
            appExp->type = candidate.resultType;
            return appExp;            
        }
        else
        {
            // TODO: re-check to get good errors

            overloadContext->mode = OverloadResolveContext::Mode::forReal;
            checkOverloadCandidate(
                overloadContext,
                candidate);
            return createErrorExp(context, appExp->loc);
        }
    }
    else if(count == 0)
    {
        // no candidates were considered!
        diagnose(getSink(context), appExp->loc, kDiagnostic_noOverloadCandidatesFound, baseName);

        if(auto overloadedExpr = as<OverloadedExpr>(appExp->base))
        {
            for(auto item : overloadedExpr->lookupResult)
            {
                diagnose(getSink(context), item.decl->loc, kDiagnostic_candidate, DeclRefVal(item.decl));                
            }
        }

        return createErrorExp(context, appExp->loc);
    }
    else
    {
        // must have been multiple candidates
        if(overloadContext->candidates[0].state == OverloadCandidate::State::Applicable)
        {
            // ey were applicable, so this is ambiguous!
            diagnose(getSink(context), appExp->loc, kDiagnostic_ambiguousCallToOverload, baseName, ArgTypeList(appExp->args.head));

            for(auto cc : overloadContext->candidates)
            {
                diagnose(getSink(context), cc.declRef.getDecl()->loc, kDiagnostic_candidate, cc.declRef);
            }

            return createErrorExp(context, appExp->loc);
        }
        else
        {
            // ey were applicable, so this is ambiguous!
            diagnose(getSink(context), appExp->loc, kDiagnostic_noApplicableOverloadForCall, baseName, ArgTypeList(appExp->args.head));

            for(auto cc : overloadContext->candidates)
            {
                diagnose(getSink(context), cc.declRef.getDecl()->loc, kDiagnostic_candidate, cc.declRef);
            }

            return createErrorExp(context, appExp->loc);
        }
    }
}

static Exp* checkTerm(
    CheckContext*   context,
    Exp*            exp);

static bool isError(
    Type*           type)
{
    return as<ErrorType>(type) != nullptr;
}

static bool isError(
    CheckContext*   context,
    Exp*            exp)
{
    return as<ErrorExp>(exp) || isError(exp->type);
}

static void addTypeOverloadCandidates(
    OverloadResolveContext* context,
    Exp*                    typeExp,
    Type*                   type)
{
    if(auto declRefType = as<DeclRefType>(type))
    {
        if(auto aggTypeDeclRef = as<AggTypeDecl>(declRefType->declRef))
        {
            // Need to look for constructors

            for(auto memberDeclRef : aggTypeDeclRef.getDecls())
            {
                if(auto initializerDeclRef = as<InitializerDecl>(memberDeclRef))
                {
                    addInitializerOverloadCandidate(context, type, initializerDeclRef);
                }
            }
        }
    }

}

struct GenericInferenceArg
{
    DeclRefValImpl<GenericParamDecl> paramDeclRef;
    Val* val = nullptr;
};

struct GenericInferenceContext
{
    CheckContext*           checkContext;
    GenericInferenceArg*    args;
};

static bool doInferenceForTypes(
    GenericInferenceContext*    context,
    Type*                       argType,
    Type*                       paramType);

static bool doInferenceForDeclRefs(
    GenericInferenceContext*    context,
    DeclRefVal                  argDeclRef,
    DeclRefVal                  paramDeclRef);

static bool doInferenceForVals(
    GenericInferenceContext*    context,
    Val*                        argVal,
    Val*                        paramVal)
{
    if(auto argType = as<Type>(argVal))
    {
        if(auto paramType = as<Type>(paramVal))
        {
            return doInferenceForTypes(context, argType, paramType);
        }
    }

    // no other types of values right now...
    return false;
}

static bool doInferenceForSpecializations(
    GenericInferenceContext*    context,
    Specializations*            argSpec,
    Specializations*            paramSpec)
{
    // Make sure we can align the generic being referened
    if(!doInferenceForDeclRefs(
        context,
        argSpec->genericDeclRef,
        paramSpec->genericDeclRef))
    {
        return false;
    }

    // Now walk through the arguments and try to unify
    auto aa = argSpec->args.head;
    auto pp = paramSpec->args.head;
    while(aa)
    {
        if(!doInferenceForVals(context, aa->value, pp->value))
            return false;

        aa = aa->next;
        pp = pp->next;
    }

    return true;
}

static bool doInferenceForDeclRefs(
    GenericInferenceContext*    context,
    DeclRefVal                  argDeclRef,
    DeclRefVal                  paramDeclRef)
{
    // TODO: need to handle possible inheritance here!
    if(paramDeclRef.getDecl()
        != argDeclRef.getDecl())
    {
        return false;
    }

    // Okay, they name the same type, so we need
    // to go ahead and recurse on their specializations.
    return doInferenceForSpecializations(
        context,
        argDeclRef.specializations,
        paramDeclRef.specializations);    
}

static bool doInferenceForTypes(
    GenericInferenceContext*    context,
    Type*                       argType,
    Type*                       paramType)
{
    //
    if(isSameType(argType, paramType))
        return true;

    if(auto paramDeclRefType = as<DeclRefType>(paramType))
    {
        if(auto genericParamDeclRef = as<GenericParamDecl>(paramDeclRefType->declRef))
        {
            assert(!"unimplemented");
            throw 99;
        }

        // Is the argument type a reference to the same
        // type declaration (maybe with different parameters)?
        if(auto argDeclRefType = as<DeclRefType>(argType))
        {
            return doInferenceForDeclRefs(
                context,
                argDeclRefType->declRef,
                paramDeclRefType->declRef);
        }
    }

    // no match!
    return false;
}


static bool doInferenceForArgAndParam(
    GenericInferenceContext*    context,
    Exp*                        argExpr,
    DeclRefValImpl<ParamDecl>   paramDeclRef)
{
    return doInferenceForTypes(
        context,
        argExpr->type,
        paramDeclRef.getType());
}

static Specializations* inferGenericArgsForApp(
    CheckContext*               context,
    DeclRefValImpl<GenericDecl> genericDeclRef,
    AppExpBase*                 appExpr)
{
    // Need to find a suitable value to substitute
    // for each parameter of the given generic.
    //
    // We can do this by trying to "unify" the
    // argument and parameter types, and find
    // constraints that they place on each parameter

    auto innerDeclRef = genericDeclRef.getInner();
    auto innerFuncDeclRef = as<FuncDeclBase>(innerDeclRef);
    if(!innerFuncDeclRef)
    {
        // TODO: consider generic types...
        return nullptr;
    }


    Array<GenericInferenceArg> args;
    for(auto member : genericDeclRef.getDecls())
    {
        if(auto genericParamDeclRef = as<GenericParamDecl>(member))
        {
            GenericInferenceArg arg;
            arg.paramDeclRef = genericParamDeclRef;

            args.append(arg);
        }
        else
        {
            // TODO: handle non-type parameters!
        }
    }

    GenericInferenceContext inferenceContext;
    inferenceContext.checkContext = context;
    inferenceContext.args = &args[0];

    auto aa = appExpr->args.begin();
    auto ae = appExpr->args.end();
    for(auto member : innerFuncDeclRef.getDecls())
    {
        auto paramDeclRef = as<ParamDecl>(member);
        if(!paramDeclRef)
            continue;

        if(!(aa != ae))
        {
            // Too few args!
            return nullptr;
        }

        auto arg = *aa;
        ++aa;

        // We have an arg and param,
        // and need to match them up!
        if(!doInferenceForArgAndParam(
            &inferenceContext,
            arg->exp,
            paramDeclRef))
        {
            return nullptr;
        }
    }
    if(aa != ae)
    {
        // Too few args!
        return nullptr;
    }

    // Now let's see if the arguments can be inferred from what
    // we've seen!
    for(auto arg : args)
    {
        if(!arg.val)
            return nullptr;
    }


    return nullptr;
}

static void addDeclRefOverloadCandidates(
    OverloadResolveContext* context,
    DeclRefVal              val);

static void addGenericOverloadCandidate(
    OverloadResolveContext* context,
    DeclRefValImpl<GenericDecl> genericDeclRef)
{
    // Need to infer argument types and then apply
    // based on those.
    //
    // Long-term we probably want to infer using
    // something like a constraint solver, but
    // for right now lets just do the easy thing
    // and use a local inference step.

    auto innerDeclRef = genericDeclRef.getInner();
    auto specializations = inferGenericArgsForApp(
        context->checkContext,
        genericDeclRef,
        context->appExp);
    if(specializations)
    {
        innerDeclRef.specializations = specializations;
    }

    // TODO: probably need to add an asosciated cost
    // so that this overload is considered "worse"
    // an an explicit match...

    addDeclRefOverloadCandidates(context, innerDeclRef);
}

static void addDeclRefOverloadCandidates(
    OverloadResolveContext* context,
    DeclRefVal              val)
{
    if(auto funcDeclRef = as<FuncDeclBase>(val))
    {
        addFuncOverloadCandidate(context, funcDeclRef);
    }
    else if(auto genericDeclRef = as<GenericDecl>(val))
    {
        addGenericOverloadCandidate(context, genericDeclRef);
    }
    else
    {
//        diagnose(getSink(context->checkContext), val.getDecl()->loc, kDiagnostic_unimplemented, "can't apply this!");
    }
}

static void addAppOverloadCandidates(
    OverloadResolveContext* context,
    Exp*                    baseExp)
{
//    fprintf(stderr, "<<<\n");
    if(auto typeType = as<TypeType>(baseExp->type))
    {
//        fprintf(stderr, "AAA \n");
//        formatType(stderr, typeType->type);
        addTypeOverloadCandidates(context, baseExp, typeType->type);
    }
    else if(auto declRefExp = as<DeclRefExp>(baseExp))
    {
//        fprintf(stderr, "BBB\n");
        // We have a declaration, and we are trying to call it
        addDeclRefOverloadCandidates(context, declRefExp->declRef);
    }
    else if(auto overloadedExpr = as<OverloadedExpr>(baseExp))
    {
        assert(!context->baseExp);
        context->baseExp = overloadedExpr->base;

//        fprintf(stderr, "CCC\n");
        assert(overloadedExpr->lookupResult.items.getCount() != 0);
        for(auto item : overloadedExpr->lookupResult)
        {
//            fprintf(stderr, "item: %s\n", getText(item.decl->name).begin);
            addDeclRefOverloadCandidates(
                context,
                DeclRefVal(item.decl));
        }
    }
    else
    {
//        diagnose(getSink(context->checkContext), baseExp->loc, kDiagnostic_unimplemented, "can't apply this!");
    }
//    fprintf(stderr, ">>>\n");
}

static Exp* checkMemberExp(
    CheckContext*   context,
    MemberExp*      exp)
{
    auto base = exp->base;
    base = checkTerm(context, base);

    auto memberName = exp->memberName;

    // If there was an error in the base expression,
    // en just return an error so we don't cascade
    if(isError(context, base))
    {
        return createErrorExp(context, exp);
    }

    auto baseType = base->type;
    if(auto baseDeclRefType = as<DeclRefType>(baseType))
    {
        auto baseDeclRef = baseDeclRefType->declRef;
        if(auto aggTypeDeclRef = as<AggTypeDecl>(baseDeclRef))
        {
            // look up in the scope of that decl...

#if 0
            // hack it for now
            for(auto mm : aggTypeDeclRef.getDecls())
            {
                if(mm.getName() == memberName)
                {
                    // we have a hit!
                    return createDeclRefExp(
                        context,
                        mm,
                        exp->loc,
                        base);
                }
            }
#endif
            // TODO: inheritance and all that...

            LookupResult lookupResult = lookupDirect(
                aggTypeDeclRef,
                memberName);

            if(lookupResult.isUnique())
            {
                return createDeclRefExp(
                    context,
                    CompactDeclRef(lookupResult.getDecl()),
                    exp->loc,
                    base);
            }
            else if(lookupResult.isOverloaded())
            {
                OverloadedExpr* overloadedExpr = COGC_ALLOC_SYNTAX(OverloadedExpr);
                overloadedExpr->loc = exp->loc;
                overloadedExpr->lookupResult = lookupResult;
                overloadedExpr->type =  COGC_ALLOC_SYNTAX(OverloadGroupType);
                overloadedExpr->base = base;
                return overloadedExpr;
            }
        }
    }


    diagnose(getSink(context), exp->loc, kDiagnostic_noMemberOfNameInType, memberName, baseType);
    return createErrorExp(context, exp);
}

static Val* extractVal(
    Exp*    exp)
{
    if(auto typeType = as<TypeType>(exp->type))
    {
        return typeType->type;
    }
    else
    {
        assert(!"unimplemented");
    }
}

static Exp* checkTerm(
	CheckContext*	context,
	Exp*			exp)
{
	if(!exp) return 0;

	if(auto nameExp = as<NameExp>(exp))
	{
		Scope* scope = nameExp->scope;
        LookupResult result = lookup(scope, nameExp->name);
        if(result.isEmpty())
		{
			// TODO: error
			diagnose(getSink(context), nameExp->loc, kDiagnostic_undefinedIdentifier, nameExp->name);
            return createErrorExp(context, nameExp->loc);
		}
        else if(!result.isOverloaded())
        {
            // form a decl-ref
            auto declRef = CompactDeclRef(result.getDecl());
            DeclRefExp* declRefExp = COGC_ALLOC_SYNTAX(DeclRefExp);
            declRefExp->loc = exp->loc;
            declRefExp->declRef = declRef;
            declRefExp->type = getTypeForDeclRef(context, declRef);
            return declRefExp;            
        }
		else
		{
            OverloadedExpr* overloadedExpr = COGC_ALLOC_SYNTAX(OverloadedExpr);
            overloadedExpr->loc = exp->loc;
            overloadedExpr->lookupResult = result;
            overloadedExpr->type =  COGC_ALLOC_SYNTAX(OverloadGroupType);
            return overloadedExpr;
		}
	}
    else if(auto memberExp = as<MemberExp>(exp))
    {
        return checkMemberExp(context, memberExp);

    }
    else if(auto intLitExp = as<IntLitExp>(exp))
    {
        // TODO: allow more robust inference here...
        intLitExp->type = getBuiltinType(context, intLitExp->loc, "Int");
        return intLitExp;
    }
    else if(auto stringLitExp = as<StringLitExp>(exp))
    {
        // TODO: allow more robust inference here...
        stringLitExp->type = getBuiltinType(context, stringLitExp->loc, "String");
        return stringLitExp;
    }
    else if(auto charLitExp = as<CharacterLitExp>(exp))
    {
        // TODO: allow more robust inference here...
        charLitExp->type = getBuiltinType(context, charLitExp->loc, "Char");
        return charLitExp;
    }
    else if(auto assignExp = as<AssignExp>(exp))
    {
        auto left = checkExp(context, assignExp->left);
        auto right = checkTerm(context, assignExp->right);
        right = coerce(context, right, left->type);

        assignExp->left = left;
        assignExp->right = right;
        assignExp->type = left->type; // TODO: should probably be `Void`
        return assignExp;
    }
    else if(auto indexExp = as<IndexExp>(exp))
    {
        auto base = checkTerm(context, indexExp->base);
        indexExp->base = base;
        for(auto arg : indexExp->args)
        {
            arg->exp = checkTerm(context, arg->exp);
        }

        // If the base expression or any argument is in error,
        // en don't bother trying to resolve things
        if(as<ErrorExp>(base) || as<ErrorType>(base->type))
        {
            return createErrorExp(context, indexExp->loc);
        }

        OverloadResolveContext overloadContext;
        overloadContext.checkContext = context;
        overloadContext.appExp = indexExp;
        overloadContext.baseExp = base;

        auto baseType = base->type;
        if(auto baseDeclRefType = as<DeclRefType>(baseType))
        {
            auto baseDeclRef = baseDeclRefType->declRef;
            if(auto aggTypeDeclRef = as<AggTypeDecl>(baseDeclRef))
            {
                // now scan through the type's members looking for a subscript

                for(auto memberDeclRef : aggTypeDeclRef.getDecls())
                {
                    if(auto memberSubscriptDeclRef = as<SubscriptDecl>(memberDeclRef))
                    {
                        addSubscriptOverloadCandidate(&overloadContext, memberSubscriptDeclRef);
                    }

                }
            }
        }

        return completeOverload(&overloadContext);
    }
    else if(auto appExp = as<AppExp>(exp))
    {
        auto base = checkTerm(context, appExp->base);
        appExp->base = base;
        for(auto arg : appExp->args)
        {
            arg->exp = checkTerm(context, arg->exp);
        }

        // If the base expression or any argument is in error,
        // en don't bother trying to resolve things
        if(isError(context, base))
        {
            return createErrorExp(context, appExp);
        }

        OverloadResolveContext overloadContext;
        overloadContext.checkContext = context;
        overloadContext.appExp = appExp;
        overloadContext.baseExp = nullptr;


        if(MemberRefExp* baseMemberRef = as<MemberRefExp>(base))
        {
            overloadContext.baseExp = baseMemberRef->base;
        }

        addAppOverloadCandidates(
            &overloadContext,
            base);

        return completeOverload(&overloadContext);
    }
	else if(auto appExp = as<AppExpBase>(exp))
	{
		auto base = checkTerm(context, appExp->base);
        appExp->base = base;
		for(auto arg : appExp->args)
		{
			arg->exp = checkTerm(context, arg->exp);
		}

        // If the base expression or any argument is in error,
        // en don't bother trying to resolve things
        if(as<ErrorExp>(base))
        {
            return createErrorExp(context, appExp->loc);
        }


		// inspect the base expression, and check it against
		// the operands...
		if(auto baseDeclRefExp = as<DeclRefExp>(base))
		{
			// the base refers to an explicit declaration, so we can
			// check for how to apply it...
            auto baseDeclRef = baseDeclRefExp->declRef;
            if(auto patternDeclRef = as<PatternDecl>(baseDeclRef))
			{
				Arg* argIter = appExp->args.head;

				for(auto declRef : patternDeclRef.getDecls())
				{
					auto paramRef = as<ParamDecl>(declRef);
					if(!paramRef) continue;

					Arg* arg = argIter;
					argIter = argIter->next;

					// try to match things up!
				}

				//
				appExp->type = getResultType(context, patternDeclRef);
				return appExp;
			}
			else if(auto genericDeclRef = as<GenericDecl>(baseDeclRef))
			{
				Arg* argIter = appExp->args.head;

				for(auto decl : genericDeclRef.getDecls())
				{
					auto param = as<GenericParamDecl>(decl);
					if(!param) continue;

					Arg* arg = argIter;
					argIter = argIter->next;

					// try to match things up!
				}

                auto specializations = createObject<Specializations>();
                specializations->genericDeclRef = genericDeclRef;

                SpecializationArg** specArgLink = &specializations->args.head;
                argIter = appExp->args.head;
                for(auto decl : genericDeclRef.getDecls())
                {
                    auto param = as<GenericParamDecl>(decl);
                    if(!param) continue;

                    Arg* arg = argIter;
                    argIter = argIter->next;

                    // try to match things up!
                    SpecializationArg* specArg = createObject<SpecializationArg>();
                    specArg->value = extractVal(arg->exp);

                    *specArgLink = specArg;
                    specArgLink = &specArg->next;
                }

                auto innerDeclRef = DeclRefVal(genericDeclRef.getDecl()->inner, specializations);

                return createDeclRefExp(
                    context,
                    innerDeclRef,
                    appExp->loc);
			}
		}

		diagnose(getSink(context), exp->loc, kDiagnostic_unimplemented, exp->directClass->name);
		assert(!"unimplemented");
		return 0;
	}
	else
	{
		diagnose(getSink(context), exp->loc, kDiagnostic_unimplemented, exp->directClass->name);
		assert(!"unimplemented");
		return 0;
	}
}

static Type* coerceToType(
	CheckContext*	context,
	Exp*			exp)
{
	Type* expType = exp->type;
	if(auto typeType = as<TypeType>(expType))
	{
		return typeType->type;
	}
    else if(auto errorType = as<ErrorType>(expType))
    {
        return errorType;
    }
	else
	{
        diagnose(getSink(context), exp->loc, kDiagnostic_unimplemented, expType->directClass->name);
		assert(!"unimplemented");
		throw 99;
	}
}

static Type* checkType(
	CheckContext*	context,
	Exp*			exp)
{
	// TODO: what?
	return coerceToType(context, checkTerm(context, exp));
}

static void checkTypeExp(
	CheckContext*	context,
	TypeExp* 		typeExp)
{
	Exp* exp = typeExp->exp;
	if(!exp)
		return;

	Type* type = checkType(context, exp);
	typeExp->type = type;
}

//

static Exp* coerceToExp(
	CheckContext*	context,
	Syntax*			term)
{
    if(auto exp = as<Exp>(term))
    {
        return exp;
    }

	throw 99;
}

static Exp* checkExp(
	CheckContext*	context,
	Exp*			exp)
{
	// TODO: what?
	return coerceToExp(context, checkTerm(context, exp));	
}

//

static Stmt* checkStmt(
	CheckContext*	context,
	Stmt*			stmt);

static Stmt* checkBlockStmt(
	CheckContext*	context,
	BlockStmt*		stmt)
{
	for(auto stmt : stmt->stmts)
	{
		checkStmt(context, stmt);
	}

	return stmt;
}

static Stmt* checkStmt(
	CheckContext*	context,
	Stmt*			stmt)
{
    if(!stmt)
        return nullptr;

	if(auto blockStmt = as<BlockStmt>(stmt))
	{
		return checkBlockStmt(context, blockStmt);
	}
    else if(auto decl = as<Decl>(stmt))
    {
        checkDecl(context, decl);
        return decl;
    }
    else if(auto exp = as<Exp>(stmt))
    {
        return checkExp(context, exp);
    }
    else if(auto ifStmt = as<IfStmt>(stmt))
    {
        // TODO: coerce condition to boolean!
        ifStmt->condition = checkExp(context, ifStmt->condition);
        ifStmt->thenStmt = checkStmt(context, ifStmt->thenStmt);
        ifStmt->elseStmt = checkStmt(context, ifStmt->elseStmt);
        return ifStmt;
    }
    else if(auto whileStmt = as<WhileStmt>(stmt))
    {
        // TODO: coerce condition to boolean!
        whileStmt->condition = checkExp(context, whileStmt->condition);
        whileStmt->body = checkStmt(context, whileStmt->body);
        return whileStmt;
    }
    else if(auto returnStmt = as<ReturnStmt>(stmt))
    {
        // TODO: coerce value to type expected in context
        returnStmt->value = checkExp(context, returnStmt->value);
        return returnStmt;
    }
    else if(auto breakStmt = as<BreakStmt>(stmt))
    {
        // TODO: check that we are inside a breakable context
        return breakStmt;
    }
	else
	{
        diagnose(getSink(context), stmt->loc, kDiagnostic_unimplemented, stmt->directClass->name);
		assert(!"unimplemented");
		throw 99;
	}
}

//

static void checkAggTypeDeclCommon(
	CheckContext*	context,
	AggTypeDecl*	decl)
{
	// check base clause, if any
	checkTypeExp(context, &decl->base);

	// TODO: validate that the base (if any)
	// names a class, and satisfies any constraints

	// check members in the context of the parent
	checkDecls(context, decl);
}

static void checkClassDecl(
	CheckContext*	context,
	ClassDecl*		decl)
{
	checkAggTypeDeclCommon(context, decl);
}

static void checkStructDecl(
	CheckContext*	context,
	StructDecl*		decl)
{
	checkAggTypeDeclCommon(context, decl);
}

static void checkFuncDecl(
	CheckContext*	context,
	FuncDeclBase*	decl)
{
	// check parameters
	checkDecls(context, decl);

	// check result type clause, if any
	checkTypeExp(context, &decl->resultType);
    if(!decl->resultType)
    {
        decl->resultType.type = getBuiltinType(context, decl->loc, "Void");
    }

	if(Stmt* body = decl->body)
	{
		decl->body = checkStmt(context, body);
	}
}

static void checkVarDecl(
	CheckContext*	context,
	VarDeclBase*	decl)
{
	// check type if any
	checkTypeExp(context, &decl->type);
    auto type = decl->type.type;

    auto init = decl->init;
    if(init)
    {
        init = checkTerm(context, init);
        if(type)
        {
            init = coerce(context, init, type);
        }
        else
        {
            // TODO: must coerce to usable...

            type = init->type;
        }
    }
    else
    {
        if(!type)
        {
            diagnose(getSink(context), decl->loc, kDiagnostic_unimplemented, "decl without init must have type");
            type = createErrorType(context);
        }
    }

    decl->init = init;
    decl->type.type = type;
}

static void checkGenericDecl(
	CheckContext*	context,
	GenericDecl*	decl)
{
    fprintf(stderr, "CHECKING GENERIC\n");

	// check params
	checkDecls(context, decl);

	// check inner decl
	checkDecl(context, decl->inner);
}

static void checkTypeAliasDecl(
	CheckContext*	context,
	TypeAliasDecl*	decl)
{
	// TODO: implement this...
}

static void checkDecl(
	CheckContext*	context,
	Decl*			decl)
{
	if(auto classDecl = as<ClassDecl>(decl))
	{
		checkClassDecl(context, classDecl);
	}
	else if(auto structDecl = as<StructDecl>(decl))
	{
		checkStructDecl(context, structDecl);
	}
	else if(auto funcDecl = as<FuncDeclBase>(decl))
	{
		checkFuncDecl(context, funcDecl);
	}
	else if(auto varDecl = as<VarDeclBase>(decl))
	{
		checkVarDecl(context, varDecl);
	}
	else if(auto genericDecl = as<GenericDecl>(decl))
	{
		checkGenericDecl(context, genericDecl);
	}
	else if(auto typeAliasDecl = as<TypeAliasDecl>(decl))
	{
		checkTypeAliasDecl(context, typeAliasDecl);
	}
	else if(auto genericParamDecl = as<GenericParamDecl>(decl))
	{
		// TODO: implement
	}
    else if(auto importDecl = as<ImportDecl>(decl))
    {
        // TODO: implement

    }
	else
	{
		diagnose(getSink(context), decl->loc, kDiagnostic_unimplemented, decl->directClass->name);
		assert(!"unimplemented");
	}
}

static void checkDecls(
	CheckContext*	context,
	ContainerDecl*	containerDecl)
{
	for(Decl* decl : containerDecl->getDecls())
	{
		checkDecl(context, decl);
	}
}

static void checkModule(
	CheckContext*	context,
	ModuleDecl*		moduleDecl)
{
    if(!moduleDecl)
        return;

    checkDecls(context, moduleDecl);
}

#endif

void checkModule(
    Session*    session,
    ModuleDecl* moduleDecl)
{
#if 0
	SharedCheckContext sharedContext = { session };
    CheckContext context = { &sharedContext };

    checkModule(&context, moduleDecl);
#endif
}

void checkModule(
	Session* session)
{
#if 0
    checkModule(session, session->moduleDecl);
#endif
}

}