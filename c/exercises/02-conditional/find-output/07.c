#include <stdio.h>

int main() {
  int k, j = 2;
  switch (k = j + 1) {
  case 0:
    printf("\nTailor");
  case 1:
    printf("\nTutor");
  case 2:
    printf("\nTramp");
  default:
    printf("\nPure Simple Egghead!");
  }
}

/*

Pure Simple Egghead!

*/