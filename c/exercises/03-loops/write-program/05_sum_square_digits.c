#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, sum = 0, d;
  scanf("%d", &n);

  while (n > 0) {
    d = n % 10;
    sum += (d * d);
    n /= 10;
  }

  printf("%d\n", sum);
  return 0;
}
