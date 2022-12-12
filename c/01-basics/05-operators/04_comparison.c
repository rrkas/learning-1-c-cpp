#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a = 10, b = 5;
  printf("%d < %d  : %d\n", a, b, a < b);  // 0
  printf("%d <= %d : %d\n", a, b, a <= b); // 0
  printf("%d > %d  : %d\n", a, b, a > b);  // 1
  printf("%d >= %d : %d\n", a, b, a >= b); // 1
  printf("%d == %d : %d\n", a, b, a == b); // 0
  printf("%d != %d : %d\n", a, b, a != b); // 1

  /*
      1 : true
      0 : false
  */

  return 0;
}
