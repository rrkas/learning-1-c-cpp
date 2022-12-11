#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("a: %d\n", a); // garbage value

    a = 10;                         // simple assignment
    printf("a = 10\t\ta: %d\n", a); // 10

    a += 10;                         // addition assignment
    printf("a += 10\t\ta: %d\n", a); // 20

    a -= 10;                         // subtraction assignment
    printf("a -= 10\t\ta: %d\n", a); // 10

    a *= 10;                         // multiplication assignment
    printf("a *= 10\t\ta: %d\n", a); // 100

    a /= 10;                         // division assignment
    printf("a /= 10\t\ta: %d\n", a); // 10

    a %= 7;                          // modulus assignment
    printf("a %%= 7\t\ta: %d\n", a); // 3

    a <<= 2;                         // left shift assignment
    printf("a <<= 2\t\ta: %d\n", a); // 12

    a >>= 2;                         // right shift assignment
    printf("a >>= 2\t\ta: %d\n", a); // 3

    a &= 5;                         // bitwise and assignment
    printf("a &= 5\t\ta: %d\n", a); // 1

    a |= 5;                         // bitwise or assignment
    printf("a |= 5\t\ta: %d\n", a); // 5

    a ^= 4;                         // bitwise xor assignment
    printf("a ^= 4\t\ta: %d\n", a); // 1

    return 0;
}
