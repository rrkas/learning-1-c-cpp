#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a, b, c, d;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  d = b * b - 4 * a * c;
  if (d < 0) {
    printf("Imaginary roots");
  } else {
    printf("Real roots");
  }
  return 0;
}
