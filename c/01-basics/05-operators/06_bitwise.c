#include <stdio.h>
int main(int argc, char const *argv[])
{
    int true = 1, false = 0;

    printf("Truth Table: AND\n");
    printf("%d & %d : %d\n", false, false, false & false); // 0
    printf("%d & %d : %d\n", false, true, false & true);   // 0
    printf("%d & %d : %d\n", true, false, true & false);   // 0
    printf("%d & %d : %d\n", true, true, true & true);     // 1

    printf("\n");

    printf("Truth Table: OR\n");
    printf("%d | %d : %d\n", false, false, false | false); // 0
    printf("%d | %d : %d\n", false, true, false | true);   // 1
    printf("%d | %d : %d\n", true, false, true | false);   // 1
    printf("%d | %d : %d\n", true, true, true | true);     // 1

    printf("\n");

    printf("Truth Table: NOT\n");
    printf("~%d : %d\n", true, ~true);   // -2
    printf("~%d : %d\n", false, ~false); // -1

    /*
        ~(n) = -(n+1)
    */

    printf("\n");

    printf("Truth Table: XOR\n");
    printf("%d ^ %d : %d\n", false, false, false ^ false); // 0
    printf("%d ^ %d : %d\n", false, true, false ^ true);   // 1
    printf("%d ^ %d : %d\n", true, false, true ^ false);   // 1
    printf("%d ^ %d : %d\n", true, true, true ^ true);     // 0

    return 0;
}
