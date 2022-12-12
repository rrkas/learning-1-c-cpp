#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 10;
    char c = a < 15 ? 'a' : 'b';

    printf("a = %d\n", a);
    printf("a < 15 ? 'a' : 'b' = %c\n", a < 15 ? 'a' : 'b');

    return 0;
}
