#include <stdio.h>
#include <limits.h>
#include <float.h>

void main()
{
    // char
    printf("signed char \t\t\t %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char \t\t\t 0 to %d\n\n", UCHAR_MAX);

    // int
    printf("signed int \t\t\t %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int \t\t\t 0 to %u\n", UINT_MAX);
    printf("signed short int \t\t %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short int \t\t 0 to %d\n", USHRT_MAX);
    printf("signed long int \t\t %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int \t\t 0 to %lu\n\n", ULONG_MAX);
    
    // float
    printf("float \t\t\t\t %e to %e\n\n", FLT_MIN, FLT_MAX);
    
    // double
    printf("double \t\t\t\t %e to %e\n", DBL_MIN, DBL_MAX);
    printf("long double \t\t\t %Le to %Le\n", LDBL_MIN, LDBL_MAX);
}