# Preprocessor
1. Macro Expansion(`#define`)
    - Macros with Arguments
    - Macros versus Functions
1. File Inclusion (`#include`)
1. Conditional Compilation (`#ifdef` and `#endif`)
1. `#if` and `#elif` Directives
1. Miscellaneous Directives
    - `#undef` Directive

It is a program that processes our source program **before** it is passed to the compiler. Preprocessor commands (often known as **directives**) form what can almost be considered a language within C language.


## Macros versus Functions
- In a macro call the preprocessor replaces the macro template with its macro expansion, in a stupid, unthinking, literal way. As against this, in a function call the control is passed to a function along with certain arguments, some calculations are performed in the function and a useful value is returned back from the function.
- If we use a macro hundred times in a program, the macro expansion goes into our source code at hundred different places, thus increasing the program size. On the other hand, if a function is used, then even if it is called from hundred different places in the program, it would take the same amount of space in the program.

Moral of the story is—if the macro is simple and sweet like in our examples, it makes nice shorthand and avoids the overheads associated with function calls. On the other hand, if we have a fairly large macro and it is used fairly often, perhaps we ought to replace it with a function.
