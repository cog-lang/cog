// tokendefs.h

#ifndef TOKEN
#define TOKEN(ID, DESCRIPTION) /* empty */
#endif

TOKEN(Invalid, "invalid")
TOKEN(EndOfFile, "end of file")
TOKEN(Identifier, "identifier")
TOKEN(InfixOperator, "infix operator")
TOKEN(PrefixOperator, "prefix operator")
TOKEN(PostfixOperator, "postfix operator")
TOKEN(LineComment, "comment")
TOKEN(BlockComment, "comment")
TOKEN(WhiteSpace, "white space")
TOKEN(EndOfLine, "end of line")
TOKEN(IntegerLiteral, "integer literal")
TOKEN(FloatingPointLiteral, "floating-point literal")
TOKEN(StringLiteral, "string literal")
TOKEN(CharacterLiteral, "character literal")

#define PUNCTUATION(name, ch) TOKEN(name, "'" #ch "'")

PUNCTUATION(LSquare, [)
PUNCTUATION(RSquare, ])
PUNCTUATION(Assign, =)
PUNCTUATION(Arrow, ->)

TOKEN(LParen, "'('")
TOKEN(RParen, "')'")

TOKEN(LCurly, "'{'")
TOKEN(RCurly, "'}'")
TOKEN(Semi, "';'")
TOKEN(Colon, "':'")
TOKEN(Comma, "','")
TOKEN(Dot, "'.'")

#undef TOKEN
