#include <stdio.h>
void main() {
  int num[26], temp;
  num[0] = 100;
  num[25] = 200;
  temp = num[25];
  num[25] = num[0];
  num[0] = temp;
  printf("\n%d %d", num[0], num[25]);
}

/*

200 100

*/