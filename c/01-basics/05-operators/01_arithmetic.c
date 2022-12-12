#include <stdio.h>
int main(int argc, char const *argv[]) {
  // Arithmetic operators are used to perform common mathematical operations
  int a = 100, b = 15;
  int i = 10;

  printf("a = %d\t\t\t\t\tb = %d\n", a, b);
  printf("\n");
  printf("a + b = %d\t\t\t\tb + a = %d\n", a + b, b + a); // Addition
  printf("a - b = %d\t\t\t\tb - a = %d\n", a - b, b - a); // Subtraction
  printf("a * b = %d\t\t\t\tb * a = %d\n", a * b, b * a); // Multiplication
  printf("a / b = %d\t\t\t\tb / a = %d\n", a / b,
         b / a); // Division (integer division)
  printf("(a / b) * 1.0 = %f\t\t(b / a) * 1.0 = %f\n", (a / b) * 1.0,
         (b / a) * 1.0); // Division (float division)
  printf("(a * 1.0) / b = %f\t\t(b * 1.0) / a = %f\n", (a * 1.0) / b,
         (b * 1.0) / a); // Division (float division)
  printf("a / (b * 1.0) = %f\t\tb / (a * 1.0) = %f\n", a / (b * 1.0),
         b / (a * 1.0)); // Division (float division)
  printf("(a * 1.0) / (b * 1.0) = %f\t(b * 1.0) / (a * 1.0) = %f\n",
         (a * 1.0) / (b * 1.0),
         (b * 1.0) / (a * 1.0)); // Division (float division)
  printf("a %% b = %d\t\t\t\tb %% a = %d\n", a % b, b % a); // Modulus

  printf("\n");
  printf("i = %d\n", i);
  i++; // Increment
  printf("after i++ => i = %d\n", i);
  i--; // Decrement
  printf("after i-- => i = %d\n", i);

  return 0;
}
