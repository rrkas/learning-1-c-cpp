#include <stdio.h>

int x = 10;

void display() { printf("%d\n", x); }

void main() {
  int x = 20;
  printf("%d\n", x);
  display();
}
