#include <stdio.h>

int add(int a, int b) {
  if (b == 0)
    return a;

  if (b < 0)
    return add(a - 1, b + 1);

  return add(a + 1, b - 1);
}

int factorial(int n) {
  if (n < 0)
    return -1;

  if (n == 0 || n == 1)
    return 1;

  return n * factorial(n - 1);
}

int main(int argc, char const *argv[]) {
  printf("%d + %d = %d\n", 5, 5, add(5, 5));
  printf("%d + %d = %d\n", 5, -10, add(5, -10));
  printf("%d! = %d\n", 5, factorial(5));
  return 0;
}
