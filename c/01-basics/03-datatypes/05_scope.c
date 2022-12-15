#include <stdio.h>

int global;
int main(int argc, char const *argv[]) {
  int local;
  printf("local = %d\n", local);   // garbage value
  printf("global = %d\n", global); // 0
  return 0;
}
