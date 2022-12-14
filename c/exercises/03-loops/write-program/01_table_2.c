#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 1;
  for (; i <= 10; i++) {
    printf("2 x %2d = %2d\n", i, 2 * i);
  }
  return 0;
}

/*

Output:
2 x  1 =  2
2 x  2 =  4
2 x  3 =  6
2 x  4 =  8
2 x  5 = 10
2 x  6 = 12
2 x  7 = 14
2 x  8 = 16
2 x  9 = 18
2 x 10 = 20

*/
