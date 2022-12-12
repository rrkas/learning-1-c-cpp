#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i;
  unsigned int ui;
  short s;
  unsigned short us;
  long l;
  unsigned long ul;
  long long ll;
  unsigned long long ull;

  // int
  printf("\nint:\n");
  i = 10;
  printf("%d\n", i); // 10
  i = -5;
  printf("%d\n", i); // -5

  // unsigned int
  printf("\nunsigned int:\n");
  ui = 10;
  printf("%u\n", ui); // 10
  ui = -5;
  printf("%u\n", ui); // 4294967291

  // short
  printf("\nshort:\n");
  s = 10;
  printf("%hi\n", s); // 10
  s = -5;
  printf("%hi\n", s); // -5

  // unsigned short
  printf("\nunsigned short:\n");
  us = 10;
  printf("%hu\n", us); // 10
  us = -5;
  printf("%hu\n", us); // 65531

  // long
  printf("\nlong:\n");
  l = 10;
  printf("%ld\n", l); // 10
  l = -5;
  printf("%ld\n", l); // -5

  // unsigned long
  printf("\nunsigned long:\n");
  ul = 10;
  printf("%lu\n", ul); // 10
  ul = -5;
  printf("%lu\n", ul); // 18446744073709551611

  // long long
  printf("\nlong long:\n");
  ll = 10;
  printf("%lld\n", ll); // 10
  ll = -5;
  printf("%lld\n", ll); // -5

  // unsigned long long
  printf("\nunsigned long long:\n");
  ull = 10;
  printf("%llu\n", ull); // 10
  ull = -5;
  printf("%llu\n", ull); // 18446744073709551611

  return 0;
}
