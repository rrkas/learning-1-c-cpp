#include <stdio.h>

int main() {
  char suite = 3;
  switch (suite) {
  case 1:
    printf("\nDiamond");
  case 2:
    printf("\nSpade");
  default:
    printf("\nHeart");
  }
  printf("\nI thought one wears a suite");
}

/*

Heart
I thought one wears a suite

*/