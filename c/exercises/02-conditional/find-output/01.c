#include <stdio.h>
int main() {
  int a = 300, b = 0, c = 0;
  if (a >= 400)
    b = 300;
  c = 200;
  printf("%d %d", b, c);
}

/*

Output:
0 200

*/
