#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 1, n, f = 1;
  scanf("%d", &n);
  for (; i <= n; i++)
    f *= i;
  printf("%d! = %d\n", n, f);
  return 0;
}
