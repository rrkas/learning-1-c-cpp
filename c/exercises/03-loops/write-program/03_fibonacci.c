#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, a = 0, b = 1, c, i;
  scanf("%d", &n);

  if (n >= 1)
    printf("0 ");

  if (n >= 2)
    printf("1 ");

  for (i = 3; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
    printf("%d ", c);
  }
  printf("\n");
  return 0;
}
