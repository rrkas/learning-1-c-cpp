#include <stdio.h>
main() {
  char s[] = "Get organised! learn C!!";
  printf("\n%s", &s[2]);
  printf("\n%s", s);
  printf("\n%s", &s);
  printf("\n%c", s[2]);
}

/*

t organised! learn C!!
Get organised! learn C!!
Get organised! learn C!!
t

*/