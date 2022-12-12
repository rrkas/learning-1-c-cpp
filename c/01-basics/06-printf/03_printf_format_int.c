#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int data = 20;
  int length_i = 0, flag_i = 0, width = 1;
  char format[20];
  char lenghts[] = "hlL";
  char flags[] = "-+ 0";
  int len_lengths = strlen(lenghts), len_flags = strlen(flags);

  for (width = 1; width < 10; width++) {
    for (flag_i = 0; flag_i < len_flags; flag_i++) {
      for (length_i = -1; length_i < len_lengths; length_i++) {
        if (length_i < 0) {
          sprintf(format, "%%%c%dd", flags[flag_i], width);
          printf("%s \t : ", format);
          printf(format, data);
          printf("\n");
        } else {
          sprintf(format, "%%%c%d%cd", flags[flag_i], width, lenghts[length_i]);
          printf("%s \t : ", format);
          printf(format, data);
          printf("\n");
        }
      }
    }
  }

  return 0;
}

/*

%-1d 	 : 20
%-1hd 	 : 20
%-1ld 	 : 20
%-1Ld 	 : 20
%+1d 	 : +20
%+1hd 	 : +20
%+1ld 	 : +20
%+1Ld 	 : +20
% 1d 	 :  20
% 1hd 	 :  20
% 1ld 	 :  20
% 1Ld 	 :  20
%01d 	 : 20
%01hd 	 : 20
%01ld 	 : 20
%01Ld 	 : 20
%-2d 	 : 20
%-2hd 	 : 20
%-2ld 	 : 20
%-2Ld 	 : 20
%+2d 	 : +20
%+2hd 	 : +20
%+2ld 	 : +20
%+2Ld 	 : +20
% 2d 	 :  20
% 2hd 	 :  20
% 2ld 	 :  20
% 2Ld 	 :  20
%02d 	 : 20
%02hd 	 : 20
%02ld 	 : 20
%02Ld 	 : 20
%-3d 	 : 20
%-3hd 	 : 20
%-3ld 	 : 20
%-3Ld 	 : 20
%+3d 	 : +20
%+3hd 	 : +20
%+3ld 	 : +20
%+3Ld 	 : +20
% 3d 	 :  20
% 3hd 	 :  20
% 3ld 	 :  20
% 3Ld 	 :  20
%03d 	 : 020
%03hd 	 : 020
%03ld 	 : 020
%03Ld 	 : 020
%-4d 	 : 20
%-4hd 	 : 20
%-4ld 	 : 20
%-4Ld 	 : 20
%+4d 	 :  +20
%+4hd 	 :  +20
%+4ld 	 :  +20
%+4Ld 	 :  +20
% 4d 	 :   20
% 4hd 	 :   20
% 4ld 	 :   20
% 4Ld 	 :   20
%04d 	 : 0020
%04hd 	 : 0020
%04ld 	 : 0020
%04Ld 	 : 0020
%-5d 	 : 20
%-5hd 	 : 20
%-5ld 	 : 20
%-5Ld 	 : 20
%+5d 	 :   +20
%+5hd 	 :   +20
%+5ld 	 :   +20
%+5Ld 	 :   +20
% 5d 	 :    20
% 5hd 	 :    20
% 5ld 	 :    20
% 5Ld 	 :    20
%05d 	 : 00020
%05hd 	 : 00020
%05ld 	 : 00020
%05Ld 	 : 00020
%-6d 	 : 20
%-6hd 	 : 20
%-6ld 	 : 20
%-6Ld 	 : 20
%+6d 	 :    +20
%+6hd 	 :    +20
%+6ld 	 :    +20
%+6Ld 	 :    +20
% 6d 	 :     20
% 6hd 	 :     20
% 6ld 	 :     20
% 6Ld 	 :     20
%06d 	 : 000020
%06hd 	 : 000020
%06ld 	 : 000020
%06Ld 	 : 000020
%-7d 	 : 20
%-7hd 	 : 20
%-7ld 	 : 20
%-7Ld 	 : 20
%+7d 	 :     +20
%+7hd 	 :     +20
%+7ld 	 :     +20
%+7Ld 	 :     +20
% 7d 	 :      20
% 7hd 	 :      20
% 7ld 	 :      20
% 7Ld 	 :      20
%07d 	 : 0000020
%07hd 	 : 0000020
%07ld 	 : 0000020
%07Ld 	 : 0000020
%-8d 	 : 20
%-8hd 	 : 20
%-8ld 	 : 20
%-8Ld 	 : 20
%+8d 	 :      +20
%+8hd 	 :      +20
%+8ld 	 :      +20
%+8Ld 	 :      +20
% 8d 	 :       20
% 8hd 	 :       20
% 8ld 	 :       20
% 8Ld 	 :       20
%08d 	 : 00000020
%08hd 	 : 00000020
%08ld 	 : 00000020
%08Ld 	 : 00000020
%-9d 	 : 20
%-9hd 	 : 20
%-9ld 	 : 20
%-9Ld 	 : 20
%+9d 	 :       +20
%+9hd 	 :       +20
%+9ld 	 :       +20
%+9Ld 	 :       +20
% 9d 	 :        20
% 9hd 	 :        20
% 9ld 	 :        20
% 9Ld 	 :        20
%09d 	 : 000000020
%09hd 	 : 000000020
%09ld 	 : 000000020
%09Ld 	 : 000000020


*/
