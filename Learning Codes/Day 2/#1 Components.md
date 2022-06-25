A C Program consists of _Constants, Identifiers, String Literals, Keywords & Symbols_

A C program is made up of different tokens combined together. <br>
**Tokens** are the building blocks of a C Program <br>
For example: If we break down the printf function into tokens, then it will look like: <br>

```
#include <stdio.h>

int main()
{
    printf
    (
     "Hello World\n"
    );
    return 0;
}
```

**;** is used for Statement Termination, so until a semi colon arrives, the compiler will treat the code as a single liner so no matter how many lines we consume the code will run accurately if written correctly <br>
**Keywords**: Keywords are reserved words that can not be used elsewhere in the program for naming a variable or function, instead they have a specific function or tasks and they are solely used for that. There are a total of 32 General Purpose Keywords in the C Language being:

> _auto,	break,	case,	char <br>
const,	continue,	default,	do <br>
double,	else,	enum,	extern <br>
float,	for,	goto,	if <br>
int,	long,	register,	return <br>
short,	signed,	sizeof,	static <br>
struct,	switch,	typedef,	union <br>
unsigned,	void,	volatile,	while <br>_

These Words _can not_ be converted into constants, identifiers, variables, etc

In the snippet above, we can recognize _return_ & _int_ are keywords <br>
**Identifiers**: They are names given to variables or functions in order to differentiate them from one another. They are solely based on our choice but there are few rules that we have to follow while naming identifiers. According to the rules the name can not contain special symbols such as @, - , *, < , etc <br>

**NOTE:** C Language does not allow _Punctuation characters_ <br>
**NOTE:** C is a case sensitive language so an identifier containing a capital letter and another one containing a small letter at the same place will be different. For example the three words: Code, code and cOde can be used as three different identifiers <br>

**String Literal/String Constant:** It is a line of characters enclosed by double quotes <br>

**Symbols:** They are special characters reserved to perform certain actions. They are used to notify the compiler so they can perform specific tasks on the given data <br>

**Constants:** They are very similar to variable and their values can be of any data type. The only difference between constant and variable is that a constant’s value never changes <br>

In the above code snippet, 0 can be identified as a constant, Hello World is a string literal <br>
An example of a symbol is "&a"
