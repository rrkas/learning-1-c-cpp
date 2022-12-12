#include <stdio.h>

int main(int argc, char const *argv[]) {
  char ch;
  unsigned char uch;

  // char
  ch = 'a';
  printf("%c (%d)\n", ch, ch); // a

  ch = '1';
  printf("%c (%d)\n", ch, ch); // 1

  ch = (char)65;
  printf("%c (%d)\n", ch, ch); // A

  printf("\n");

  // unsigned char
  uch = 'a';
  printf("%c (%d)\n", uch, uch); // a

  uch = '1';
  printf("%c (%d)\n", uch, uch); // 1

  uch = (unsigned char)65;
  printf("%c (%d)\n", uch, uch); // A

  return 0;
}
