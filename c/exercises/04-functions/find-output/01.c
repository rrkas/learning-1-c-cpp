#include <stdio.h>

int check(int ch) {
  if (ch >= 40000)
    return (ch / 10);
  else
    return (10);
}

void main() {
  int i = 45, c;
  c = check(i * 1000);
  printf("\n%d", c);
}

/*

output:
4500

*/