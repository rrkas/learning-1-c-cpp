#include <stdio.h>

void swap_by_value(int a, int b) {
  int t;
  t = a;
  a = b;
  b = t;
  printf("a = %d\tb=%d\t\tin swap_by_value\n", a, b);
}

void swap_by_reference(int *a, int *b) {
  int t;
  t = *a;
  *a = *b;
  *b = t;
  printf("*a = %d\t*b=%d\t\tin swap_by_reference\n", *a, *b);
}

int main(int argc, char const *argv[]) {
  int x = 10, y = 20;
  printf("x = %d\ty=%d\n", x, y);

  // sending the values of the arguments
  swap_by_value(x, y);
  printf("x = %d\ty=%d\n", x, y);

  // sending the addresses of the arguments
  swap_by_reference(&x, &y);
  printf("x = %d\ty=%d\n", x, y);
  return 0;
}

/*

swap means exchange

output:
x = 10  y=20
a = 20  b=10            in swap_by_value
x = 10  y=20
*a = 20 *b=10           in swap_by_reference
x = 20  y=10
*/