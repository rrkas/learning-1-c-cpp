#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("char:\n");
    printf("sizeof(char) \t\t: %lu bytes\n", sizeof(char));
    printf("sizeof(unsigned char) \t: %lu bytes\n", sizeof(unsigned char));

    printf("\n");

    printf("int:\n");
    printf("sizeof(int) \t\t: %lu bytes\n", sizeof(int));
    printf("sizeof(unsigned int) \t: %lu bytes\n", sizeof(unsigned int));
    printf("sizeof(short) \t\t: %lu bytes\n", sizeof(short));
    printf("sizeof(short int) \t: %lu bytes\n", sizeof(short int));
    printf("sizeof(long) \t\t: %lu bytes\n", sizeof(long));
    printf("sizeof(long int) \t: %lu bytes\n", sizeof(long int));
    printf("sizeof(long long) \t: %lu bytes\n", sizeof(long long));
    printf("sizeof(long long int) \t: %lu bytes\n", sizeof(long long int));

    printf("\n");

    printf("float:\n");
    printf("sizeof(float) \t\t: %lu bytes\n", sizeof(float));

    printf("\n");

    printf("double:\n");
    printf("sizeof(double) \t\t: %lu bytes\n", sizeof(double));
    printf("sizeof(long double) \t: %lu bytes\n", sizeof(long double));

    return 0;
}
