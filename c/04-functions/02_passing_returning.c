#include <stdio.h>
int calSum(int x, int y, int z) {
  int d;
  d = x + y + z;
  return d;
}
int main(int argc, char const *argv[]) {
  int a, b, c, sum;
  printf("Enter any three space-separated numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  sum = calSum(a, b, c);
  printf("Sum = %d\n", sum);
  return 0;
}

/*

The variables a, b and c are called 'actual arguments',
whereas
the variables x, y and z are called 'formal arguments'.

*/