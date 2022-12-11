#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Arithmetic operators are used to perform common mathematical operations
    int a = 100, b = 15;
    int i = 10;

    printf("a = %d\t\t\tb = %d\n", a, b);
    printf("\n");
    printf("a + b = %d\t\tb + a = %d\n", a + b, b + a);   // Addition
    printf("a - b = %d\t\tb - a = %d\n", a - b, b - a);   // Subtraction
    printf("a * b = %d\t\tb * a = %d\n", a * b, b * a);   // Multiplication
    printf("a / b = %d\t\tb / a = %d\n", a / b, b / a);   // Division
    printf("a %% b = %d\t\tb %% a = %d\n", a % b, b % a); // Modulus

    printf("\n");
    printf("i = %d\n", i);
    i++; // Increment
    printf("after i++ => i = %d\n", i);
    i--; // Decrement
    printf("after i-- => i = %d\n", i);

    return 0;
}
