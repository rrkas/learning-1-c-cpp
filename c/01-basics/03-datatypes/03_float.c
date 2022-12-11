#include <stdio.h>

int main(int argc, char const *argv[])
{
    float f;

    f = 1.365;
    printf("%f\n", f); // 1.365000

    f = 1e5;
    printf("%f\n", f); // 100000.000000

    f = 1e15;
    printf("%e %g\n", f, f); // 1.000000e+15 1e+15

    f = 1e15;
    printf("%E %G\n", f, f); // 1.000000E+15 1E+15

    return 0;
}
