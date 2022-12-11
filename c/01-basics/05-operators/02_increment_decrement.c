#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*

        there are 2 positions for increment and decrement operators:

        a++         post-increment
        ++a         pre-increment

        b--         post-decrement
        --b         pre-decrement

        difference:
        - in post operations, first current value is used in the statement, and then the increment/ decrement operator is applied
        - in pre operations, first increment/ decrement operator is applied and then updated value is used in the statement

    */
    int a = 10, b = 10;
    printf("a = %d\n", a);     // 10
    printf("a++ = %d\n", a++); // 10
    printf("a = %d\n", a);     // 11
    printf("++a = %d\n", ++a); // 12
    printf("a = %d\n", a);     // 12

    printf("\n");

    printf("b = %d\n", b);     // 10
    printf("b-- = %d\n", b--); // 10
    printf("b = %d\n", b);     // 9
    printf("--b = %d\n", --b); // 8
    printf("b = %d\n", b);     // 8

    printf("\n");

    a = 10;
    printf("a = %d\t\ta++ = %d\t\t++a = %d\n", a, a++, ++a); // 12 11 12

    /*
        Q: Why?
        A: Anything can happen

        The C standard states: "Between the previous and next sequence point an object shall have its stored value modified at most once by the evaluation of an expression. Furthermore, the prior value shall be accessed only to determine the value to be stored." To do otherwise results in undefined behavior: Anything can happen.

        The C standard defines sequence points as:
            - at the end of the evaluation of a full expression (a full expression is an expression statement, or any other expression which is not a subexpression within any larger expression)
            - at the ||, &&, ?:, and , operators
            - at a function call (after the evaluation of all the arguments, and just before the actual call)

        In short, its unpredictable.

    */

    printf("\n");

    a = 10;
    printf("a = %d\n", a); // 10
    a = a++;
    printf("a = %d\n", a); // 10

    return 0;
}
