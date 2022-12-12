#include <stdio.h>

int main(int argc, char const *argv[]) {
  double d;

  d = 1.365;
  printf("%lf\n", d); // 1.365000

  d = 1e5;
  printf("%lf\n", d); // 100000.000000

  d = -1e-105;
  printf("%e %g\n", d, d); // -1.000000e-105 -1e-105

  d = 1e105;
  printf("%E %G\n", d, d); // 1.000000E+105 1E+105

  return 0;
}
