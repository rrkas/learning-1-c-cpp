#include <stdio.h>

void inc() {
  static int counter; // static
  counter++;
  printf("static  : %d\n", counter);
}

int main(int argc, char const *argv[]) {
  int i;          // auto
  register int r; // register
  printf("auto    : %d\n", i);
  printf("register: %d\n", r);

  for (i = 0; i < 10; i++)
    inc();

  return 0;
}
