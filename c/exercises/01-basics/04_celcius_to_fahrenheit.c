#include <stdio.h>

int main(int argc, char const *argv[])
{
    float c;
    scanf("%f", &c);

    printf("%f\n", (1.8 * c) + 32);
    return 0;
}

/*

Convert temperature from Celsius to Fahrenheit
================================

Input Format
temperature in Celsius (float)

Example:
47

---------------------------------

Output Format
temperature in Fahrenheit (float)

Example:
116.600000

---------------------------------

0. Sample
Input:
47
Output:
116.600000

1. Sample
Input:
25
Output:
77.000000


*/
