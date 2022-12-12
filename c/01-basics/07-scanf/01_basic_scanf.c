#include <stdio.h>
int main(int argc, char const *argv[]) {
  char ch;
  int i;
  float f;
  double d;
  long double ld;

  printf("char? ");
  scanf("%c", &ch);

  printf("int? ");
  scanf("%d", &i);

  printf("float? ");
  scanf("%f", &f);

  printf("double? ");
  scanf("%lf", &d);

  printf("long double? ");
  scanf("%Lf", &ld);

  printf("%c %d %f %lf %Lf\n", ch, i, f, d, ld);

  return 0;
}

/*

char? a
int? 2
float? .2563
double? 65465.546545
long double? 6876543211.6543512135456
a 2 0.256300 65465.546545 6876543211.654351

*/
