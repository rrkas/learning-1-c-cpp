#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c, s, area;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    s = (a + b + c) / 2;
    area = sqrtf(s * (s - a) * (s - b) * (s - c));

    printf("%f\n", area);
    return 0;
}

/*

Calculate area of a triangle using Hero's formula
================================

Input Format
sides (float) of a triangle, 1 side on each line

Example:
3
4
5

---------------------------------

Output Format
float representing area of the triangle

Example:
6

---------------------------------

0. Sample
Input:
3
4
5
Output:
6

1. Sample
Input:
6
8
9
Output:
23.525253


*/
