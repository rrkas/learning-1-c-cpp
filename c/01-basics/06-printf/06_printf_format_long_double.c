#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  long double data = 2.365;
  int length_i = 0, flag_i = 0, width = 1, precision = 0;
  char format[20];
  char lenghts[] = "hlL";
  char flags[] = "-+ 0";
  int len_lengths = strlen(lenghts), len_flags = strlen(flags);

  for (width = 1; width < 10; width++) {
    for (precision = 0; precision < 10; precision++) {
      for (flag_i = 0; flag_i < len_flags; flag_i++) {
        for (length_i = -1; length_i < len_lengths; length_i++) {
          if (length_i < 0) {
            sprintf(format, "%%%c%d.%df", flags[flag_i], width, precision);
            printf("%s \t\t : ", format);
            printf(format, data);
            printf("\n");
          } else {
            sprintf(format, "%%%c%d.%d%cf", flags[flag_i], width, precision,
                    lenghts[length_i]);
            printf("%s \t : ", format);
            printf(format, data);
            printf("\n");
          }
        }
      }
    }
  }

  return 0;
}

/*

%-1.0f 		 : 0
%-1.0hf 	 : 0
%-1.0lf 	 : 0
%-1.0Lf 	 : 2
%+1.0f 		 : +0
%+1.0hf 	 : +0
%+1.0lf 	 : +0
%+1.0Lf 	 : +2
% 1.0f 		 :  0
% 1.0hf 	 :  0
% 1.0lf 	 :  0
% 1.0Lf 	 :  2
%01.0f 		 : 0
%01.0hf 	 : 0
%01.0lf 	 : 0
%01.0Lf 	 : 2
%-1.1f 		 : 0.0
%-1.1hf 	 : 0.0
%-1.1lf 	 : 0.0
%-1.1Lf 	 : 2.4
%+1.1f 		 : +0.0
%+1.1hf 	 : +0.0
%+1.1lf 	 : +0.0
%+1.1Lf 	 : +2.4
% 1.1f 		 :  0.0
% 1.1hf 	 :  0.0
% 1.1lf 	 :  0.0
% 1.1Lf 	 :  2.4
%01.1f 		 : 0.0
%01.1hf 	 : 0.0
%01.1lf 	 : 0.0
%01.1Lf 	 : 2.4
%-1.2f 		 : 0.00
%-1.2hf 	 : 0.00
%-1.2lf 	 : 0.00
%-1.2Lf 	 : 2.37
%+1.2f 		 : +0.00
%+1.2hf 	 : +0.00
%+1.2lf 	 : +0.00
%+1.2Lf 	 : +2.37
% 1.2f 		 :  0.00
% 1.2hf 	 :  0.00
% 1.2lf 	 :  0.00
% 1.2Lf 	 :  2.37
%01.2f 		 : 0.00
%01.2hf 	 : 0.00
%01.2lf 	 : 0.00
%01.2Lf 	 : 2.37
%-1.3f 		 : 0.000
%-1.3hf 	 : 0.000
%-1.3lf 	 : 0.000
%-1.3Lf 	 : 2.365
%+1.3f 		 : +0.000
%+1.3hf 	 : +0.000
%+1.3lf 	 : +0.000
%+1.3Lf 	 : +2.365
% 1.3f 		 :  0.000
% 1.3hf 	 :  0.000
% 1.3lf 	 :  0.000
% 1.3Lf 	 :  2.365
%01.3f 		 : 0.000
%01.3hf 	 : 0.000
%01.3lf 	 : 0.000
%01.3Lf 	 : 2.365
%-1.4f 		 : 0.0000
%-1.4hf 	 : 0.0000
%-1.4lf 	 : 0.0000
%-1.4Lf 	 : 2.3650
%+1.4f 		 : +0.0000
%+1.4hf 	 : +0.0000
%+1.4lf 	 : +0.0000
%+1.4Lf 	 : +2.3650
% 1.4f 		 :  0.0000
% 1.4hf 	 :  0.0000
% 1.4lf 	 :  0.0000
% 1.4Lf 	 :  2.3650
%01.4f 		 : 0.0000
%01.4hf 	 : 0.0000
%01.4lf 	 : 0.0000
%01.4Lf 	 : 2.3650
%-1.5f 		 : 0.00000
%-1.5hf 	 : 0.00000
%-1.5lf 	 : 0.00000
%-1.5Lf 	 : 2.36500
%+1.5f 		 : +0.00000
%+1.5hf 	 : +0.00000
%+1.5lf 	 : +0.00000
%+1.5Lf 	 : +2.36500
% 1.5f 		 :  0.00000
% 1.5hf 	 :  0.00000
% 1.5lf 	 :  0.00000
% 1.5Lf 	 :  2.36500
%01.5f 		 : 0.00000
%01.5hf 	 : 0.00000
%01.5lf 	 : 0.00000
%01.5Lf 	 : 2.36500
%-1.6f 		 : 0.000000
%-1.6hf 	 : 0.000000
%-1.6lf 	 : 0.000000
%-1.6Lf 	 : 2.365000
%+1.6f 		 : +0.000000
%+1.6hf 	 : +0.000000
%+1.6lf 	 : +0.000000
%+1.6Lf 	 : +2.365000
% 1.6f 		 :  0.000000
% 1.6hf 	 :  0.000000
% 1.6lf 	 :  0.000000
% 1.6Lf 	 :  2.365000
%01.6f 		 : 0.000000
%01.6hf 	 : 0.000000
%01.6lf 	 : 0.000000
%01.6Lf 	 : 2.365000
%-1.7f 		 : 0.0000000
%-1.7hf 	 : 0.0000000
%-1.7lf 	 : 0.0000000
%-1.7Lf 	 : 2.3650000
%+1.7f 		 : +0.0000000
%+1.7hf 	 : +0.0000000
%+1.7lf 	 : +0.0000000
%+1.7Lf 	 : +2.3650000
% 1.7f 		 :  0.0000000
% 1.7hf 	 :  0.0000000
% 1.7lf 	 :  0.0000000
% 1.7Lf 	 :  2.3650000
%01.7f 		 : 0.0000000
%01.7hf 	 : 0.0000000
%01.7lf 	 : 0.0000000
%01.7Lf 	 : 2.3650000
%-1.8f 		 : 0.00000000
%-1.8hf 	 : 0.00000000
%-1.8lf 	 : 0.00000000
%-1.8Lf 	 : 2.36500000
%+1.8f 		 : +0.00000000
%+1.8hf 	 : +0.00000000
%+1.8lf 	 : +0.00000000
%+1.8Lf 	 : +2.36500000
% 1.8f 		 :  0.00000000
% 1.8hf 	 :  0.00000000
% 1.8lf 	 :  0.00000000
% 1.8Lf 	 :  2.36500000
%01.8f 		 : 0.00000000
%01.8hf 	 : 0.00000000
%01.8lf 	 : 0.00000000
%01.8Lf 	 : 2.36500000
%-1.9f 		 : 0.000000000
%-1.9hf 	 : 0.000000000
%-1.9lf 	 : 0.000000000
%-1.9Lf 	 : 2.365000000
%+1.9f 		 : +0.000000000
%+1.9hf 	 : +0.000000000
%+1.9lf 	 : +0.000000000
%+1.9Lf 	 : +2.365000000
% 1.9f 		 :  0.000000000
% 1.9hf 	 :  0.000000000
% 1.9lf 	 :  0.000000000
% 1.9Lf 	 :  2.365000000
%01.9f 		 : 0.000000000
%01.9hf 	 : 0.000000000
%01.9lf 	 : 0.000000000
%01.9Lf 	 : 2.365000000
%-2.0f 		 : 0
%-2.0hf 	 : 0
%-2.0lf 	 : 0
%-2.0Lf 	 : 2
%+2.0f 		 : +0
%+2.0hf 	 : +0
%+2.0lf 	 : +0
%+2.0Lf 	 : +2
% 2.0f 		 :  0
% 2.0hf 	 :  0
% 2.0lf 	 :  0
% 2.0Lf 	 :  2
%02.0f 		 : 00
%02.0hf 	 : 00
%02.0lf 	 : 00
%02.0Lf 	 : 02
%-2.1f 		 : 0.0
%-2.1hf 	 : 0.0
%-2.1lf 	 : 0.0
%-2.1Lf 	 : 2.4
%+2.1f 		 : +0.0
%+2.1hf 	 : +0.0
%+2.1lf 	 : +0.0
%+2.1Lf 	 : +2.4
% 2.1f 		 :  0.0
% 2.1hf 	 :  0.0
% 2.1lf 	 :  0.0
% 2.1Lf 	 :  2.4
%02.1f 		 : 0.0
%02.1hf 	 : 0.0
%02.1lf 	 : 0.0
%02.1Lf 	 : 2.4
%-2.2f 		 : 0.00
%-2.2hf 	 : 0.00
%-2.2lf 	 : 0.00
%-2.2Lf 	 : 2.37
%+2.2f 		 : +0.00
%+2.2hf 	 : +0.00
%+2.2lf 	 : +0.00
%+2.2Lf 	 : +2.37
% 2.2f 		 :  0.00
% 2.2hf 	 :  0.00
% 2.2lf 	 :  0.00
% 2.2Lf 	 :  2.37
%02.2f 		 : 0.00
%02.2hf 	 : 0.00
%02.2lf 	 : 0.00
%02.2Lf 	 : 2.37
%-2.3f 		 : 0.000
%-2.3hf 	 : 0.000
%-2.3lf 	 : 0.000
%-2.3Lf 	 : 2.365
%+2.3f 		 : +0.000
%+2.3hf 	 : +0.000
%+2.3lf 	 : +0.000
%+2.3Lf 	 : +2.365
% 2.3f 		 :  0.000
% 2.3hf 	 :  0.000
% 2.3lf 	 :  0.000
% 2.3Lf 	 :  2.365
%02.3f 		 : 0.000
%02.3hf 	 : 0.000
%02.3lf 	 : 0.000
%02.3Lf 	 : 2.365
%-2.4f 		 : 0.0000
%-2.4hf 	 : 0.0000
%-2.4lf 	 : 0.0000
%-2.4Lf 	 : 2.3650
%+2.4f 		 : +0.0000
%+2.4hf 	 : +0.0000
%+2.4lf 	 : +0.0000
%+2.4Lf 	 : +2.3650
% 2.4f 		 :  0.0000
% 2.4hf 	 :  0.0000
% 2.4lf 	 :  0.0000
% 2.4Lf 	 :  2.3650
%02.4f 		 : 0.0000
%02.4hf 	 : 0.0000
%02.4lf 	 : 0.0000
%02.4Lf 	 : 2.3650
%-2.5f 		 : 0.00000
%-2.5hf 	 : 0.00000
%-2.5lf 	 : 0.00000
%-2.5Lf 	 : 2.36500
%+2.5f 		 : +0.00000
%+2.5hf 	 : +0.00000
%+2.5lf 	 : +0.00000
%+2.5Lf 	 : +2.36500
% 2.5f 		 :  0.00000
% 2.5hf 	 :  0.00000
% 2.5lf 	 :  0.00000
% 2.5Lf 	 :  2.36500
%02.5f 		 : 0.00000
%02.5hf 	 : 0.00000
%02.5lf 	 : 0.00000
%02.5Lf 	 : 2.36500
%-2.6f 		 : 0.000000
%-2.6hf 	 : 0.000000
%-2.6lf 	 : 0.000000
%-2.6Lf 	 : 2.365000
%+2.6f 		 : +0.000000
%+2.6hf 	 : +0.000000
%+2.6lf 	 : +0.000000
%+2.6Lf 	 : +2.365000
% 2.6f 		 :  0.000000
% 2.6hf 	 :  0.000000
% 2.6lf 	 :  0.000000
% 2.6Lf 	 :  2.365000
%02.6f 		 : 0.000000
%02.6hf 	 : 0.000000
%02.6lf 	 : 0.000000
%02.6Lf 	 : 2.365000
%-2.7f 		 : 0.0000000
%-2.7hf 	 : 0.0000000
%-2.7lf 	 : 0.0000000
%-2.7Lf 	 : 2.3650000
%+2.7f 		 : +0.0000000
%+2.7hf 	 : +0.0000000
%+2.7lf 	 : +0.0000000
%+2.7Lf 	 : +2.3650000
% 2.7f 		 :  0.0000000
% 2.7hf 	 :  0.0000000
% 2.7lf 	 :  0.0000000
% 2.7Lf 	 :  2.3650000
%02.7f 		 : 0.0000000
%02.7hf 	 : 0.0000000
%02.7lf 	 : 0.0000000
%02.7Lf 	 : 2.3650000
%-2.8f 		 : 0.00000000
%-2.8hf 	 : 0.00000000
%-2.8lf 	 : 0.00000000
%-2.8Lf 	 : 2.36500000
%+2.8f 		 : +0.00000000
%+2.8hf 	 : +0.00000000
%+2.8lf 	 : +0.00000000
%+2.8Lf 	 : +2.36500000
% 2.8f 		 :  0.00000000
% 2.8hf 	 :  0.00000000
% 2.8lf 	 :  0.00000000
% 2.8Lf 	 :  2.36500000
%02.8f 		 : 0.00000000
%02.8hf 	 : 0.00000000
%02.8lf 	 : 0.00000000
%02.8Lf 	 : 2.36500000
%-2.9f 		 : 0.000000000
%-2.9hf 	 : 0.000000000
%-2.9lf 	 : 0.000000000
%-2.9Lf 	 : 2.365000000
%+2.9f 		 : +0.000000000
%+2.9hf 	 : +0.000000000
%+2.9lf 	 : +0.000000000
%+2.9Lf 	 : +2.365000000
% 2.9f 		 :  0.000000000
% 2.9hf 	 :  0.000000000
% 2.9lf 	 :  0.000000000
% 2.9Lf 	 :  2.365000000
%02.9f 		 : 0.000000000
%02.9hf 	 : 0.000000000
%02.9lf 	 : 0.000000000
%02.9Lf 	 : 2.365000000
%-3.0f 		 : 0
%-3.0hf 	 : 0
%-3.0lf 	 : 0
%-3.0Lf 	 : 2
%+3.0f 		 :  +0
%+3.0hf 	 :  +0
%+3.0lf 	 :  +0
%+3.0Lf 	 :  +2
% 3.0f 		 :   0
% 3.0hf 	 :   0
% 3.0lf 	 :   0
% 3.0Lf 	 :   2
%03.0f 		 : 000
%03.0hf 	 : 000
%03.0lf 	 : 000
%03.0Lf 	 : 002
%-3.1f 		 : 0.0
%-3.1hf 	 : 0.0
%-3.1lf 	 : 0.0
%-3.1Lf 	 : 2.4
%+3.1f 		 : +0.0
%+3.1hf 	 : +0.0
%+3.1lf 	 : +0.0
%+3.1Lf 	 : +2.4
% 3.1f 		 :  0.0
% 3.1hf 	 :  0.0
% 3.1lf 	 :  0.0
% 3.1Lf 	 :  2.4
%03.1f 		 : 0.0
%03.1hf 	 : 0.0
%03.1lf 	 : 0.0
%03.1Lf 	 : 2.4
%-3.2f 		 : 0.00
%-3.2hf 	 : 0.00
%-3.2lf 	 : 0.00
%-3.2Lf 	 : 2.37
%+3.2f 		 : +0.00
%+3.2hf 	 : +0.00
%+3.2lf 	 : +0.00
%+3.2Lf 	 : +2.37
% 3.2f 		 :  0.00
% 3.2hf 	 :  0.00
% 3.2lf 	 :  0.00
% 3.2Lf 	 :  2.37
%03.2f 		 : 0.00
%03.2hf 	 : 0.00
%03.2lf 	 : 0.00
%03.2Lf 	 : 2.37
%-3.3f 		 : 0.000
%-3.3hf 	 : 0.000
%-3.3lf 	 : 0.000
%-3.3Lf 	 : 2.365
%+3.3f 		 : +0.000
%+3.3hf 	 : +0.000
%+3.3lf 	 : +0.000
%+3.3Lf 	 : +2.365
% 3.3f 		 :  0.000
% 3.3hf 	 :  0.000
% 3.3lf 	 :  0.000
% 3.3Lf 	 :  2.365
%03.3f 		 : 0.000
%03.3hf 	 : 0.000
%03.3lf 	 : 0.000
%03.3Lf 	 : 2.365
%-3.4f 		 : 0.0000
%-3.4hf 	 : 0.0000
%-3.4lf 	 : 0.0000
%-3.4Lf 	 : 2.3650
%+3.4f 		 : +0.0000
%+3.4hf 	 : +0.0000
%+3.4lf 	 : +0.0000
%+3.4Lf 	 : +2.3650
% 3.4f 		 :  0.0000
% 3.4hf 	 :  0.0000
% 3.4lf 	 :  0.0000
% 3.4Lf 	 :  2.3650
%03.4f 		 : 0.0000
%03.4hf 	 : 0.0000
%03.4lf 	 : 0.0000
%03.4Lf 	 : 2.3650
%-3.5f 		 : 0.00000
%-3.5hf 	 : 0.00000
%-3.5lf 	 : 0.00000
%-3.5Lf 	 : 2.36500
%+3.5f 		 : +0.00000
%+3.5hf 	 : +0.00000
%+3.5lf 	 : +0.00000
%+3.5Lf 	 : +2.36500
% 3.5f 		 :  0.00000
% 3.5hf 	 :  0.00000
% 3.5lf 	 :  0.00000
% 3.5Lf 	 :  2.36500
%03.5f 		 : 0.00000
%03.5hf 	 : 0.00000
%03.5lf 	 : 0.00000
%03.5Lf 	 : 2.36500
%-3.6f 		 : 0.000000
%-3.6hf 	 : 0.000000
%-3.6lf 	 : 0.000000
%-3.6Lf 	 : 2.365000
%+3.6f 		 : +0.000000
%+3.6hf 	 : +0.000000
%+3.6lf 	 : +0.000000
%+3.6Lf 	 : +2.365000
% 3.6f 		 :  0.000000
% 3.6hf 	 :  0.000000
% 3.6lf 	 :  0.000000
% 3.6Lf 	 :  2.365000
%03.6f 		 : 0.000000
%03.6hf 	 : 0.000000
%03.6lf 	 : 0.000000
%03.6Lf 	 : 2.365000
%-3.7f 		 : 0.0000000
%-3.7hf 	 : 0.0000000
%-3.7lf 	 : 0.0000000
%-3.7Lf 	 : 2.3650000
%+3.7f 		 : +0.0000000
%+3.7hf 	 : +0.0000000
%+3.7lf 	 : +0.0000000
%+3.7Lf 	 : +2.3650000
% 3.7f 		 :  0.0000000
% 3.7hf 	 :  0.0000000
% 3.7lf 	 :  0.0000000
% 3.7Lf 	 :  2.3650000
%03.7f 		 : 0.0000000
%03.7hf 	 : 0.0000000
%03.7lf 	 : 0.0000000
%03.7Lf 	 : 2.3650000
%-3.8f 		 : 0.00000000
%-3.8hf 	 : 0.00000000
%-3.8lf 	 : 0.00000000
%-3.8Lf 	 : 2.36500000
%+3.8f 		 : +0.00000000
%+3.8hf 	 : +0.00000000
%+3.8lf 	 : +0.00000000
%+3.8Lf 	 : +2.36500000
% 3.8f 		 :  0.00000000
% 3.8hf 	 :  0.00000000
% 3.8lf 	 :  0.00000000
% 3.8Lf 	 :  2.36500000
%03.8f 		 : 0.00000000
%03.8hf 	 : 0.00000000
%03.8lf 	 : 0.00000000
%03.8Lf 	 : 2.36500000
%-3.9f 		 : 0.000000000
%-3.9hf 	 : 0.000000000
%-3.9lf 	 : 0.000000000
%-3.9Lf 	 : 2.365000000
%+3.9f 		 : +0.000000000
%+3.9hf 	 : +0.000000000
%+3.9lf 	 : +0.000000000
%+3.9Lf 	 : +2.365000000
% 3.9f 		 :  0.000000000
% 3.9hf 	 :  0.000000000
% 3.9lf 	 :  0.000000000
% 3.9Lf 	 :  2.365000000
%03.9f 		 : 0.000000000
%03.9hf 	 : 0.000000000
%03.9lf 	 : 0.000000000
%03.9Lf 	 : 2.365000000
%-4.0f 		 : 0
%-4.0hf 	 : 0
%-4.0lf 	 : 0
%-4.0Lf 	 : 2
%+4.0f 		 :   +0
%+4.0hf 	 :   +0
%+4.0lf 	 :   +0
%+4.0Lf 	 :   +2
% 4.0f 		 :    0
% 4.0hf 	 :    0
% 4.0lf 	 :    0
% 4.0Lf 	 :    2
%04.0f 		 : 0000
%04.0hf 	 : 0000
%04.0lf 	 : 0000
%04.0Lf 	 : 0002
%-4.1f 		 : 0.0
%-4.1hf 	 : 0.0
%-4.1lf 	 : 0.0
%-4.1Lf 	 : 2.4
%+4.1f 		 : +0.0
%+4.1hf 	 : +0.0
%+4.1lf 	 : +0.0
%+4.1Lf 	 : +2.4
% 4.1f 		 :  0.0
% 4.1hf 	 :  0.0
% 4.1lf 	 :  0.0
% 4.1Lf 	 :  2.4
%04.1f 		 : 00.0
%04.1hf 	 : 00.0
%04.1lf 	 : 00.0
%04.1Lf 	 : 02.4
%-4.2f 		 : 0.00
%-4.2hf 	 : 0.00
%-4.2lf 	 : 0.00
%-4.2Lf 	 : 2.37
%+4.2f 		 : +0.00
%+4.2hf 	 : +0.00
%+4.2lf 	 : +0.00
%+4.2Lf 	 : +2.37
% 4.2f 		 :  0.00
% 4.2hf 	 :  0.00
% 4.2lf 	 :  0.00
% 4.2Lf 	 :  2.37
%04.2f 		 : 0.00
%04.2hf 	 : 0.00
%04.2lf 	 : 0.00
%04.2Lf 	 : 2.37
%-4.3f 		 : 0.000
%-4.3hf 	 : 0.000
%-4.3lf 	 : 0.000
%-4.3Lf 	 : 2.365
%+4.3f 		 : +0.000
%+4.3hf 	 : +0.000
%+4.3lf 	 : +0.000
%+4.3Lf 	 : +2.365
% 4.3f 		 :  0.000
% 4.3hf 	 :  0.000
% 4.3lf 	 :  0.000
% 4.3Lf 	 :  2.365
%04.3f 		 : 0.000
%04.3hf 	 : 0.000
%04.3lf 	 : 0.000
%04.3Lf 	 : 2.365
%-4.4f 		 : 0.0000
%-4.4hf 	 : 0.0000
%-4.4lf 	 : 0.0000
%-4.4Lf 	 : 2.3650
%+4.4f 		 : +0.0000
%+4.4hf 	 : +0.0000
%+4.4lf 	 : +0.0000
%+4.4Lf 	 : +2.3650
% 4.4f 		 :  0.0000
% 4.4hf 	 :  0.0000
% 4.4lf 	 :  0.0000
% 4.4Lf 	 :  2.3650
%04.4f 		 : 0.0000
%04.4hf 	 : 0.0000
%04.4lf 	 : 0.0000
%04.4Lf 	 : 2.3650
%-4.5f 		 : 0.00000
%-4.5hf 	 : 0.00000
%-4.5lf 	 : 0.00000
%-4.5Lf 	 : 2.36500
%+4.5f 		 : +0.00000
%+4.5hf 	 : +0.00000
%+4.5lf 	 : +0.00000
%+4.5Lf 	 : +2.36500
% 4.5f 		 :  0.00000
% 4.5hf 	 :  0.00000
% 4.5lf 	 :  0.00000
% 4.5Lf 	 :  2.36500
%04.5f 		 : 0.00000
%04.5hf 	 : 0.00000
%04.5lf 	 : 0.00000
%04.5Lf 	 : 2.36500
%-4.6f 		 : 0.000000
%-4.6hf 	 : 0.000000
%-4.6lf 	 : 0.000000
%-4.6Lf 	 : 2.365000
%+4.6f 		 : +0.000000
%+4.6hf 	 : +0.000000
%+4.6lf 	 : +0.000000
%+4.6Lf 	 : +2.365000
% 4.6f 		 :  0.000000
% 4.6hf 	 :  0.000000
% 4.6lf 	 :  0.000000
% 4.6Lf 	 :  2.365000
%04.6f 		 : 0.000000
%04.6hf 	 : 0.000000
%04.6lf 	 : 0.000000
%04.6Lf 	 : 2.365000
%-4.7f 		 : 0.0000000
%-4.7hf 	 : 0.0000000
%-4.7lf 	 : 0.0000000
%-4.7Lf 	 : 2.3650000
%+4.7f 		 : +0.0000000
%+4.7hf 	 : +0.0000000
%+4.7lf 	 : +0.0000000
%+4.7Lf 	 : +2.3650000
% 4.7f 		 :  0.0000000
% 4.7hf 	 :  0.0000000
% 4.7lf 	 :  0.0000000
% 4.7Lf 	 :  2.3650000
%04.7f 		 : 0.0000000
%04.7hf 	 : 0.0000000
%04.7lf 	 : 0.0000000
%04.7Lf 	 : 2.3650000
%-4.8f 		 : 0.00000000
%-4.8hf 	 : 0.00000000
%-4.8lf 	 : 0.00000000
%-4.8Lf 	 : 2.36500000
%+4.8f 		 : +0.00000000
%+4.8hf 	 : +0.00000000
%+4.8lf 	 : +0.00000000
%+4.8Lf 	 : +2.36500000
% 4.8f 		 :  0.00000000
% 4.8hf 	 :  0.00000000
% 4.8lf 	 :  0.00000000
% 4.8Lf 	 :  2.36500000
%04.8f 		 : 0.00000000
%04.8hf 	 : 0.00000000
%04.8lf 	 : 0.00000000
%04.8Lf 	 : 2.36500000
%-4.9f 		 : 0.000000000
%-4.9hf 	 : 0.000000000
%-4.9lf 	 : 0.000000000
%-4.9Lf 	 : 2.365000000
%+4.9f 		 : +0.000000000
%+4.9hf 	 : +0.000000000
%+4.9lf 	 : +0.000000000
%+4.9Lf 	 : +2.365000000
% 4.9f 		 :  0.000000000
% 4.9hf 	 :  0.000000000
% 4.9lf 	 :  0.000000000
% 4.9Lf 	 :  2.365000000
%04.9f 		 : 0.000000000
%04.9hf 	 : 0.000000000
%04.9lf 	 : 0.000000000
%04.9Lf 	 : 2.365000000
%-5.0f 		 : 0
%-5.0hf 	 : 0
%-5.0lf 	 : 0
%-5.0Lf 	 : 2
%+5.0f 		 :    +0
%+5.0hf 	 :    +0
%+5.0lf 	 :    +0
%+5.0Lf 	 :    +2
% 5.0f 		 :     0
% 5.0hf 	 :     0
% 5.0lf 	 :     0
% 5.0Lf 	 :     2
%05.0f 		 : 00000
%05.0hf 	 : 00000
%05.0lf 	 : 00000
%05.0Lf 	 : 00002
%-5.1f 		 : 0.0
%-5.1hf 	 : 0.0
%-5.1lf 	 : 0.0
%-5.1Lf 	 : 2.4
%+5.1f 		 :  +0.0
%+5.1hf 	 :  +0.0
%+5.1lf 	 :  +0.0
%+5.1Lf 	 :  +2.4
% 5.1f 		 :   0.0
% 5.1hf 	 :   0.0
% 5.1lf 	 :   0.0
% 5.1Lf 	 :   2.4
%05.1f 		 : 000.0
%05.1hf 	 : 000.0
%05.1lf 	 : 000.0
%05.1Lf 	 : 002.4
%-5.2f 		 : 0.00
%-5.2hf 	 : 0.00
%-5.2lf 	 : 0.00
%-5.2Lf 	 : 2.37
%+5.2f 		 : +0.00
%+5.2hf 	 : +0.00
%+5.2lf 	 : +0.00
%+5.2Lf 	 : +2.37
% 5.2f 		 :  0.00
% 5.2hf 	 :  0.00
% 5.2lf 	 :  0.00
% 5.2Lf 	 :  2.37
%05.2f 		 : 00.00
%05.2hf 	 : 00.00
%05.2lf 	 : 00.00
%05.2Lf 	 : 02.37
%-5.3f 		 : 0.000
%-5.3hf 	 : 0.000
%-5.3lf 	 : 0.000
%-5.3Lf 	 : 2.365
%+5.3f 		 : +0.000
%+5.3hf 	 : +0.000
%+5.3lf 	 : +0.000
%+5.3Lf 	 : +2.365
% 5.3f 		 :  0.000
% 5.3hf 	 :  0.000
% 5.3lf 	 :  0.000
% 5.3Lf 	 :  2.365
%05.3f 		 : 0.000
%05.3hf 	 : 0.000
%05.3lf 	 : 0.000
%05.3Lf 	 : 2.365
%-5.4f 		 : 0.0000
%-5.4hf 	 : 0.0000
%-5.4lf 	 : 0.0000
%-5.4Lf 	 : 2.3650
%+5.4f 		 : +0.0000
%+5.4hf 	 : +0.0000
%+5.4lf 	 : +0.0000
%+5.4Lf 	 : +2.3650
% 5.4f 		 :  0.0000
% 5.4hf 	 :  0.0000
% 5.4lf 	 :  0.0000
% 5.4Lf 	 :  2.3650
%05.4f 		 : 0.0000
%05.4hf 	 : 0.0000
%05.4lf 	 : 0.0000
%05.4Lf 	 : 2.3650
%-5.5f 		 : 0.00000
%-5.5hf 	 : 0.00000
%-5.5lf 	 : 0.00000
%-5.5Lf 	 : 2.36500
%+5.5f 		 : +0.00000
%+5.5hf 	 : +0.00000
%+5.5lf 	 : +0.00000
%+5.5Lf 	 : +2.36500
% 5.5f 		 :  0.00000
% 5.5hf 	 :  0.00000
% 5.5lf 	 :  0.00000
% 5.5Lf 	 :  2.36500
%05.5f 		 : 0.00000
%05.5hf 	 : 0.00000
%05.5lf 	 : 0.00000
%05.5Lf 	 : 2.36500
%-5.6f 		 : 0.000000
%-5.6hf 	 : 0.000000
%-5.6lf 	 : 0.000000
%-5.6Lf 	 : 2.365000
%+5.6f 		 : +0.000000
%+5.6hf 	 : +0.000000
%+5.6lf 	 : +0.000000
%+5.6Lf 	 : +2.365000
% 5.6f 		 :  0.000000
% 5.6hf 	 :  0.000000
% 5.6lf 	 :  0.000000
% 5.6Lf 	 :  2.365000
%05.6f 		 : 0.000000
%05.6hf 	 : 0.000000
%05.6lf 	 : 0.000000
%05.6Lf 	 : 2.365000
%-5.7f 		 : 0.0000000
%-5.7hf 	 : 0.0000000
%-5.7lf 	 : 0.0000000
%-5.7Lf 	 : 2.3650000
%+5.7f 		 : +0.0000000
%+5.7hf 	 : +0.0000000
%+5.7lf 	 : +0.0000000
%+5.7Lf 	 : +2.3650000
% 5.7f 		 :  0.0000000
% 5.7hf 	 :  0.0000000
% 5.7lf 	 :  0.0000000
% 5.7Lf 	 :  2.3650000
%05.7f 		 : 0.0000000
%05.7hf 	 : 0.0000000
%05.7lf 	 : 0.0000000
%05.7Lf 	 : 2.3650000
%-5.8f 		 : 0.00000000
%-5.8hf 	 : 0.00000000
%-5.8lf 	 : 0.00000000
%-5.8Lf 	 : 2.36500000
%+5.8f 		 : +0.00000000
%+5.8hf 	 : +0.00000000
%+5.8lf 	 : +0.00000000
%+5.8Lf 	 : +2.36500000
% 5.8f 		 :  0.00000000
% 5.8hf 	 :  0.00000000
% 5.8lf 	 :  0.00000000
% 5.8Lf 	 :  2.36500000
%05.8f 		 : 0.00000000
%05.8hf 	 : 0.00000000
%05.8lf 	 : 0.00000000
%05.8Lf 	 : 2.36500000
%-5.9f 		 : 0.000000000
%-5.9hf 	 : 0.000000000
%-5.9lf 	 : 0.000000000
%-5.9Lf 	 : 2.365000000
%+5.9f 		 : +0.000000000
%+5.9hf 	 : +0.000000000
%+5.9lf 	 : +0.000000000
%+5.9Lf 	 : +2.365000000
% 5.9f 		 :  0.000000000
% 5.9hf 	 :  0.000000000
% 5.9lf 	 :  0.000000000
% 5.9Lf 	 :  2.365000000
%05.9f 		 : 0.000000000
%05.9hf 	 : 0.000000000
%05.9lf 	 : 0.000000000
%05.9Lf 	 : 2.365000000
%-6.0f 		 : 0
%-6.0hf 	 : 0
%-6.0lf 	 : 0
%-6.0Lf 	 : 2
%+6.0f 		 :     +0
%+6.0hf 	 :     +0
%+6.0lf 	 :     +0
%+6.0Lf 	 :     +2
% 6.0f 		 :      0
% 6.0hf 	 :      0
% 6.0lf 	 :      0
% 6.0Lf 	 :      2
%06.0f 		 : 000000
%06.0hf 	 : 000000
%06.0lf 	 : 000000
%06.0Lf 	 : 000002
%-6.1f 		 : 0.0
%-6.1hf 	 : 0.0
%-6.1lf 	 : 0.0
%-6.1Lf 	 : 2.4
%+6.1f 		 :   +0.0
%+6.1hf 	 :   +0.0
%+6.1lf 	 :   +0.0
%+6.1Lf 	 :   +2.4
% 6.1f 		 :    0.0
% 6.1hf 	 :    0.0
% 6.1lf 	 :    0.0
% 6.1Lf 	 :    2.4
%06.1f 		 : 0000.0
%06.1hf 	 : 0000.0
%06.1lf 	 : 0000.0
%06.1Lf 	 : 0002.4
%-6.2f 		 : 0.00
%-6.2hf 	 : 0.00
%-6.2lf 	 : 0.00
%-6.2Lf 	 : 2.37
%+6.2f 		 :  +0.00
%+6.2hf 	 :  +0.00
%+6.2lf 	 :  +0.00
%+6.2Lf 	 :  +2.37
% 6.2f 		 :   0.00
% 6.2hf 	 :   0.00
% 6.2lf 	 :   0.00
% 6.2Lf 	 :   2.37
%06.2f 		 : 000.00
%06.2hf 	 : 000.00
%06.2lf 	 : 000.00
%06.2Lf 	 : 002.37
%-6.3f 		 : 0.000
%-6.3hf 	 : 0.000
%-6.3lf 	 : 0.000
%-6.3Lf 	 : 2.365
%+6.3f 		 : +0.000
%+6.3hf 	 : +0.000
%+6.3lf 	 : +0.000
%+6.3Lf 	 : +2.365
% 6.3f 		 :  0.000
% 6.3hf 	 :  0.000
% 6.3lf 	 :  0.000
% 6.3Lf 	 :  2.365
%06.3f 		 : 00.000
%06.3hf 	 : 00.000
%06.3lf 	 : 00.000
%06.3Lf 	 : 02.365
%-6.4f 		 : 0.0000
%-6.4hf 	 : 0.0000
%-6.4lf 	 : 0.0000
%-6.4Lf 	 : 2.3650
%+6.4f 		 : +0.0000
%+6.4hf 	 : +0.0000
%+6.4lf 	 : +0.0000
%+6.4Lf 	 : +2.3650
% 6.4f 		 :  0.0000
% 6.4hf 	 :  0.0000
% 6.4lf 	 :  0.0000
% 6.4Lf 	 :  2.3650
%06.4f 		 : 0.0000
%06.4hf 	 : 0.0000
%06.4lf 	 : 0.0000
%06.4Lf 	 : 2.3650
%-6.5f 		 : 0.00000
%-6.5hf 	 : 0.00000
%-6.5lf 	 : 0.00000
%-6.5Lf 	 : 2.36500
%+6.5f 		 : +0.00000
%+6.5hf 	 : +0.00000
%+6.5lf 	 : +0.00000
%+6.5Lf 	 : +2.36500
% 6.5f 		 :  0.00000
% 6.5hf 	 :  0.00000
% 6.5lf 	 :  0.00000
% 6.5Lf 	 :  2.36500
%06.5f 		 : 0.00000
%06.5hf 	 : 0.00000
%06.5lf 	 : 0.00000
%06.5Lf 	 : 2.36500
%-6.6f 		 : 0.000000
%-6.6hf 	 : 0.000000
%-6.6lf 	 : 0.000000
%-6.6Lf 	 : 2.365000
%+6.6f 		 : +0.000000
%+6.6hf 	 : +0.000000
%+6.6lf 	 : +0.000000
%+6.6Lf 	 : +2.365000
% 6.6f 		 :  0.000000
% 6.6hf 	 :  0.000000
% 6.6lf 	 :  0.000000
% 6.6Lf 	 :  2.365000
%06.6f 		 : 0.000000
%06.6hf 	 : 0.000000
%06.6lf 	 : 0.000000
%06.6Lf 	 : 2.365000
%-6.7f 		 : 0.0000000
%-6.7hf 	 : 0.0000000
%-6.7lf 	 : 0.0000000
%-6.7Lf 	 : 2.3650000
%+6.7f 		 : +0.0000000
%+6.7hf 	 : +0.0000000
%+6.7lf 	 : +0.0000000
%+6.7Lf 	 : +2.3650000
% 6.7f 		 :  0.0000000
% 6.7hf 	 :  0.0000000
% 6.7lf 	 :  0.0000000
% 6.7Lf 	 :  2.3650000
%06.7f 		 : 0.0000000
%06.7hf 	 : 0.0000000
%06.7lf 	 : 0.0000000
%06.7Lf 	 : 2.3650000
%-6.8f 		 : 0.00000000
%-6.8hf 	 : 0.00000000
%-6.8lf 	 : 0.00000000
%-6.8Lf 	 : 2.36500000
%+6.8f 		 : +0.00000000
%+6.8hf 	 : +0.00000000
%+6.8lf 	 : +0.00000000
%+6.8Lf 	 : +2.36500000
% 6.8f 		 :  0.00000000
% 6.8hf 	 :  0.00000000
% 6.8lf 	 :  0.00000000
% 6.8Lf 	 :  2.36500000
%06.8f 		 : 0.00000000
%06.8hf 	 : 0.00000000
%06.8lf 	 : 0.00000000
%06.8Lf 	 : 2.36500000
%-6.9f 		 : 0.000000000
%-6.9hf 	 : 0.000000000
%-6.9lf 	 : 0.000000000
%-6.9Lf 	 : 2.365000000
%+6.9f 		 : +0.000000000
%+6.9hf 	 : +0.000000000
%+6.9lf 	 : +0.000000000
%+6.9Lf 	 : +2.365000000
% 6.9f 		 :  0.000000000
% 6.9hf 	 :  0.000000000
% 6.9lf 	 :  0.000000000
% 6.9Lf 	 :  2.365000000
%06.9f 		 : 0.000000000
%06.9hf 	 : 0.000000000
%06.9lf 	 : 0.000000000
%06.9Lf 	 : 2.365000000
%-7.0f 		 : 0
%-7.0hf 	 : 0
%-7.0lf 	 : 0
%-7.0Lf 	 : 2
%+7.0f 		 :      +0
%+7.0hf 	 :      +0
%+7.0lf 	 :      +0
%+7.0Lf 	 :      +2
% 7.0f 		 :       0
% 7.0hf 	 :       0
% 7.0lf 	 :       0
% 7.0Lf 	 :       2
%07.0f 		 : 0000000
%07.0hf 	 : 0000000
%07.0lf 	 : 0000000
%07.0Lf 	 : 0000002
%-7.1f 		 : 0.0
%-7.1hf 	 : 0.0
%-7.1lf 	 : 0.0
%-7.1Lf 	 : 2.4
%+7.1f 		 :    +0.0
%+7.1hf 	 :    +0.0
%+7.1lf 	 :    +0.0
%+7.1Lf 	 :    +2.4
% 7.1f 		 :     0.0
% 7.1hf 	 :     0.0
% 7.1lf 	 :     0.0
% 7.1Lf 	 :     2.4
%07.1f 		 : 00000.0
%07.1hf 	 : 00000.0
%07.1lf 	 : 00000.0
%07.1Lf 	 : 00002.4
%-7.2f 		 : 0.00
%-7.2hf 	 : 0.00
%-7.2lf 	 : 0.00
%-7.2Lf 	 : 2.37
%+7.2f 		 :   +0.00
%+7.2hf 	 :   +0.00
%+7.2lf 	 :   +0.00
%+7.2Lf 	 :   +2.37
% 7.2f 		 :    0.00
% 7.2hf 	 :    0.00
% 7.2lf 	 :    0.00
% 7.2Lf 	 :    2.37
%07.2f 		 : 0000.00
%07.2hf 	 : 0000.00
%07.2lf 	 : 0000.00
%07.2Lf 	 : 0002.37
%-7.3f 		 : 0.000
%-7.3hf 	 : 0.000
%-7.3lf 	 : 0.000
%-7.3Lf 	 : 2.365
%+7.3f 		 :  +0.000
%+7.3hf 	 :  +0.000
%+7.3lf 	 :  +0.000
%+7.3Lf 	 :  +2.365
% 7.3f 		 :   0.000
% 7.3hf 	 :   0.000
% 7.3lf 	 :   0.000
% 7.3Lf 	 :   2.365
%07.3f 		 : 000.000
%07.3hf 	 : 000.000
%07.3lf 	 : 000.000
%07.3Lf 	 : 002.365
%-7.4f 		 : 0.0000
%-7.4hf 	 : 0.0000
%-7.4lf 	 : 0.0000
%-7.4Lf 	 : 2.3650
%+7.4f 		 : +0.0000
%+7.4hf 	 : +0.0000
%+7.4lf 	 : +0.0000
%+7.4Lf 	 : +2.3650
% 7.4f 		 :  0.0000
% 7.4hf 	 :  0.0000
% 7.4lf 	 :  0.0000
% 7.4Lf 	 :  2.3650
%07.4f 		 : 00.0000
%07.4hf 	 : 00.0000
%07.4lf 	 : 00.0000
%07.4Lf 	 : 02.3650
%-7.5f 		 : 0.00000
%-7.5hf 	 : 0.00000
%-7.5lf 	 : 0.00000
%-7.5Lf 	 : 2.36500
%+7.5f 		 : +0.00000
%+7.5hf 	 : +0.00000
%+7.5lf 	 : +0.00000
%+7.5Lf 	 : +2.36500
% 7.5f 		 :  0.00000
% 7.5hf 	 :  0.00000
% 7.5lf 	 :  0.00000
% 7.5Lf 	 :  2.36500
%07.5f 		 : 0.00000
%07.5hf 	 : 0.00000
%07.5lf 	 : 0.00000
%07.5Lf 	 : 2.36500
%-7.6f 		 : 0.000000
%-7.6hf 	 : 0.000000
%-7.6lf 	 : 0.000000
%-7.6Lf 	 : 2.365000
%+7.6f 		 : +0.000000
%+7.6hf 	 : +0.000000
%+7.6lf 	 : +0.000000
%+7.6Lf 	 : +2.365000
% 7.6f 		 :  0.000000
% 7.6hf 	 :  0.000000
% 7.6lf 	 :  0.000000
% 7.6Lf 	 :  2.365000
%07.6f 		 : 0.000000
%07.6hf 	 : 0.000000
%07.6lf 	 : 0.000000
%07.6Lf 	 : 2.365000
%-7.7f 		 : 0.0000000
%-7.7hf 	 : 0.0000000
%-7.7lf 	 : 0.0000000
%-7.7Lf 	 : 2.3650000
%+7.7f 		 : +0.0000000
%+7.7hf 	 : +0.0000000
%+7.7lf 	 : +0.0000000
%+7.7Lf 	 : +2.3650000
% 7.7f 		 :  0.0000000
% 7.7hf 	 :  0.0000000
% 7.7lf 	 :  0.0000000
% 7.7Lf 	 :  2.3650000
%07.7f 		 : 0.0000000
%07.7hf 	 : 0.0000000
%07.7lf 	 : 0.0000000
%07.7Lf 	 : 2.3650000
%-7.8f 		 : 0.00000000
%-7.8hf 	 : 0.00000000
%-7.8lf 	 : 0.00000000
%-7.8Lf 	 : 2.36500000
%+7.8f 		 : +0.00000000
%+7.8hf 	 : +0.00000000
%+7.8lf 	 : +0.00000000
%+7.8Lf 	 : +2.36500000
% 7.8f 		 :  0.00000000
% 7.8hf 	 :  0.00000000
% 7.8lf 	 :  0.00000000
% 7.8Lf 	 :  2.36500000
%07.8f 		 : 0.00000000
%07.8hf 	 : 0.00000000
%07.8lf 	 : 0.00000000
%07.8Lf 	 : 2.36500000
%-7.9f 		 : 0.000000000
%-7.9hf 	 : 0.000000000
%-7.9lf 	 : 0.000000000
%-7.9Lf 	 : 2.365000000
%+7.9f 		 : +0.000000000
%+7.9hf 	 : +0.000000000
%+7.9lf 	 : +0.000000000
%+7.9Lf 	 : +2.365000000
% 7.9f 		 :  0.000000000
% 7.9hf 	 :  0.000000000
% 7.9lf 	 :  0.000000000
% 7.9Lf 	 :  2.365000000
%07.9f 		 : 0.000000000
%07.9hf 	 : 0.000000000
%07.9lf 	 : 0.000000000
%07.9Lf 	 : 2.365000000
%-8.0f 		 : 0
%-8.0hf 	 : 0
%-8.0lf 	 : 0
%-8.0Lf 	 : 2
%+8.0f 		 :       +0
%+8.0hf 	 :       +0
%+8.0lf 	 :       +0
%+8.0Lf 	 :       +2
% 8.0f 		 :        0
% 8.0hf 	 :        0
% 8.0lf 	 :        0
% 8.0Lf 	 :        2
%08.0f 		 : 00000000
%08.0hf 	 : 00000000
%08.0lf 	 : 00000000
%08.0Lf 	 : 00000002
%-8.1f 		 : 0.0
%-8.1hf 	 : 0.0
%-8.1lf 	 : 0.0
%-8.1Lf 	 : 2.4
%+8.1f 		 :     +0.0
%+8.1hf 	 :     +0.0
%+8.1lf 	 :     +0.0
%+8.1Lf 	 :     +2.4
% 8.1f 		 :      0.0
% 8.1hf 	 :      0.0
% 8.1lf 	 :      0.0
% 8.1Lf 	 :      2.4
%08.1f 		 : 000000.0
%08.1hf 	 : 000000.0
%08.1lf 	 : 000000.0
%08.1Lf 	 : 000002.4
%-8.2f 		 : 0.00
%-8.2hf 	 : 0.00
%-8.2lf 	 : 0.00
%-8.2Lf 	 : 2.37
%+8.2f 		 :    +0.00
%+8.2hf 	 :    +0.00
%+8.2lf 	 :    +0.00
%+8.2Lf 	 :    +2.37
% 8.2f 		 :     0.00
% 8.2hf 	 :     0.00
% 8.2lf 	 :     0.00
% 8.2Lf 	 :     2.37
%08.2f 		 : 00000.00
%08.2hf 	 : 00000.00
%08.2lf 	 : 00000.00
%08.2Lf 	 : 00002.37
%-8.3f 		 : 0.000
%-8.3hf 	 : 0.000
%-8.3lf 	 : 0.000
%-8.3Lf 	 : 2.365
%+8.3f 		 :   +0.000
%+8.3hf 	 :   +0.000
%+8.3lf 	 :   +0.000
%+8.3Lf 	 :   +2.365
% 8.3f 		 :    0.000
% 8.3hf 	 :    0.000
% 8.3lf 	 :    0.000
% 8.3Lf 	 :    2.365
%08.3f 		 : 0000.000
%08.3hf 	 : 0000.000
%08.3lf 	 : 0000.000
%08.3Lf 	 : 0002.365
%-8.4f 		 : 0.0000
%-8.4hf 	 : 0.0000
%-8.4lf 	 : 0.0000
%-8.4Lf 	 : 2.3650
%+8.4f 		 :  +0.0000
%+8.4hf 	 :  +0.0000
%+8.4lf 	 :  +0.0000
%+8.4Lf 	 :  +2.3650
% 8.4f 		 :   0.0000
% 8.4hf 	 :   0.0000
% 8.4lf 	 :   0.0000
% 8.4Lf 	 :   2.3650
%08.4f 		 : 000.0000
%08.4hf 	 : 000.0000
%08.4lf 	 : 000.0000
%08.4Lf 	 : 002.3650
%-8.5f 		 : 0.00000
%-8.5hf 	 : 0.00000
%-8.5lf 	 : 0.00000
%-8.5Lf 	 : 2.36500
%+8.5f 		 : +0.00000
%+8.5hf 	 : +0.00000
%+8.5lf 	 : +0.00000
%+8.5Lf 	 : +2.36500
% 8.5f 		 :  0.00000
% 8.5hf 	 :  0.00000
% 8.5lf 	 :  0.00000
% 8.5Lf 	 :  2.36500
%08.5f 		 : 00.00000
%08.5hf 	 : 00.00000
%08.5lf 	 : 00.00000
%08.5Lf 	 : 02.36500
%-8.6f 		 : 0.000000
%-8.6hf 	 : 0.000000
%-8.6lf 	 : 0.000000
%-8.6Lf 	 : 2.365000
%+8.6f 		 : +0.000000
%+8.6hf 	 : +0.000000
%+8.6lf 	 : +0.000000
%+8.6Lf 	 : +2.365000
% 8.6f 		 :  0.000000
% 8.6hf 	 :  0.000000
% 8.6lf 	 :  0.000000
% 8.6Lf 	 :  2.365000
%08.6f 		 : 0.000000
%08.6hf 	 : 0.000000
%08.6lf 	 : 0.000000
%08.6Lf 	 : 2.365000
%-8.7f 		 : 0.0000000
%-8.7hf 	 : 0.0000000
%-8.7lf 	 : 0.0000000
%-8.7Lf 	 : 2.3650000
%+8.7f 		 : +0.0000000
%+8.7hf 	 : +0.0000000
%+8.7lf 	 : +0.0000000
%+8.7Lf 	 : +2.3650000
% 8.7f 		 :  0.0000000
% 8.7hf 	 :  0.0000000
% 8.7lf 	 :  0.0000000
% 8.7Lf 	 :  2.3650000
%08.7f 		 : 0.0000000
%08.7hf 	 : 0.0000000
%08.7lf 	 : 0.0000000
%08.7Lf 	 : 2.3650000
%-8.8f 		 : 0.00000000
%-8.8hf 	 : 0.00000000
%-8.8lf 	 : 0.00000000
%-8.8Lf 	 : 2.36500000
%+8.8f 		 : +0.00000000
%+8.8hf 	 : +0.00000000
%+8.8lf 	 : +0.00000000
%+8.8Lf 	 : +2.36500000
% 8.8f 		 :  0.00000000
% 8.8hf 	 :  0.00000000
% 8.8lf 	 :  0.00000000
% 8.8Lf 	 :  2.36500000
%08.8f 		 : 0.00000000
%08.8hf 	 : 0.00000000
%08.8lf 	 : 0.00000000
%08.8Lf 	 : 2.36500000
%-8.9f 		 : 0.000000000
%-8.9hf 	 : 0.000000000
%-8.9lf 	 : 0.000000000
%-8.9Lf 	 : 2.365000000
%+8.9f 		 : +0.000000000
%+8.9hf 	 : +0.000000000
%+8.9lf 	 : +0.000000000
%+8.9Lf 	 : +2.365000000
% 8.9f 		 :  0.000000000
% 8.9hf 	 :  0.000000000
% 8.9lf 	 :  0.000000000
% 8.9Lf 	 :  2.365000000
%08.9f 		 : 0.000000000
%08.9hf 	 : 0.000000000
%08.9lf 	 : 0.000000000
%08.9Lf 	 : 2.365000000
%-9.0f 		 : 0
%-9.0hf 	 : 0
%-9.0lf 	 : 0
%-9.0Lf 	 : 2
%+9.0f 		 :        +0
%+9.0hf 	 :        +0
%+9.0lf 	 :        +0
%+9.0Lf 	 :        +2
% 9.0f 		 :         0
% 9.0hf 	 :         0
% 9.0lf 	 :         0
% 9.0Lf 	 :         2
%09.0f 		 : 000000000
%09.0hf 	 : 000000000
%09.0lf 	 : 000000000
%09.0Lf 	 : 000000002
%-9.1f 		 : 0.0
%-9.1hf 	 : 0.0
%-9.1lf 	 : 0.0
%-9.1Lf 	 : 2.4
%+9.1f 		 :      +0.0
%+9.1hf 	 :      +0.0
%+9.1lf 	 :      +0.0
%+9.1Lf 	 :      +2.4
% 9.1f 		 :       0.0
% 9.1hf 	 :       0.0
% 9.1lf 	 :       0.0
% 9.1Lf 	 :       2.4
%09.1f 		 : 0000000.0
%09.1hf 	 : 0000000.0
%09.1lf 	 : 0000000.0
%09.1Lf 	 : 0000002.4
%-9.2f 		 : 0.00
%-9.2hf 	 : 0.00
%-9.2lf 	 : 0.00
%-9.2Lf 	 : 2.37
%+9.2f 		 :     +0.00
%+9.2hf 	 :     +0.00
%+9.2lf 	 :     +0.00
%+9.2Lf 	 :     +2.37
% 9.2f 		 :      0.00
% 9.2hf 	 :      0.00
% 9.2lf 	 :      0.00
% 9.2Lf 	 :      2.37
%09.2f 		 : 000000.00
%09.2hf 	 : 000000.00
%09.2lf 	 : 000000.00
%09.2Lf 	 : 000002.37
%-9.3f 		 : 0.000
%-9.3hf 	 : 0.000
%-9.3lf 	 : 0.000
%-9.3Lf 	 : 2.365
%+9.3f 		 :    +0.000
%+9.3hf 	 :    +0.000
%+9.3lf 	 :    +0.000
%+9.3Lf 	 :    +2.365
% 9.3f 		 :     0.000
% 9.3hf 	 :     0.000
% 9.3lf 	 :     0.000
% 9.3Lf 	 :     2.365
%09.3f 		 : 00000.000
%09.3hf 	 : 00000.000
%09.3lf 	 : 00000.000
%09.3Lf 	 : 00002.365
%-9.4f 		 : 0.0000
%-9.4hf 	 : 0.0000
%-9.4lf 	 : 0.0000
%-9.4Lf 	 : 2.3650
%+9.4f 		 :   +0.0000
%+9.4hf 	 :   +0.0000
%+9.4lf 	 :   +0.0000
%+9.4Lf 	 :   +2.3650
% 9.4f 		 :    0.0000
% 9.4hf 	 :    0.0000
% 9.4lf 	 :    0.0000
% 9.4Lf 	 :    2.3650
%09.4f 		 : 0000.0000
%09.4hf 	 : 0000.0000
%09.4lf 	 : 0000.0000
%09.4Lf 	 : 0002.3650
%-9.5f 		 : 0.00000
%-9.5hf 	 : 0.00000
%-9.5lf 	 : 0.00000
%-9.5Lf 	 : 2.36500
%+9.5f 		 :  +0.00000
%+9.5hf 	 :  +0.00000
%+9.5lf 	 :  +0.00000
%+9.5Lf 	 :  +2.36500
% 9.5f 		 :   0.00000
% 9.5hf 	 :   0.00000
% 9.5lf 	 :   0.00000
% 9.5Lf 	 :   2.36500
%09.5f 		 : 000.00000
%09.5hf 	 : 000.00000
%09.5lf 	 : 000.00000
%09.5Lf 	 : 002.36500
%-9.6f 		 : 0.000000
%-9.6hf 	 : 0.000000
%-9.6lf 	 : 0.000000
%-9.6Lf 	 : 2.365000
%+9.6f 		 : +0.000000
%+9.6hf 	 : +0.000000
%+9.6lf 	 : +0.000000
%+9.6Lf 	 : +2.365000
% 9.6f 		 :  0.000000
% 9.6hf 	 :  0.000000
% 9.6lf 	 :  0.000000
% 9.6Lf 	 :  2.365000
%09.6f 		 : 00.000000
%09.6hf 	 : 00.000000
%09.6lf 	 : 00.000000
%09.6Lf 	 : 02.365000
%-9.7f 		 : 0.0000000
%-9.7hf 	 : 0.0000000
%-9.7lf 	 : 0.0000000
%-9.7Lf 	 : 2.3650000
%+9.7f 		 : +0.0000000
%+9.7hf 	 : +0.0000000
%+9.7lf 	 : +0.0000000
%+9.7Lf 	 : +2.3650000
% 9.7f 		 :  0.0000000
% 9.7hf 	 :  0.0000000
% 9.7lf 	 :  0.0000000
% 9.7Lf 	 :  2.3650000
%09.7f 		 : 0.0000000
%09.7hf 	 : 0.0000000
%09.7lf 	 : 0.0000000
%09.7Lf 	 : 2.3650000
%-9.8f 		 : 0.00000000
%-9.8hf 	 : 0.00000000
%-9.8lf 	 : 0.00000000
%-9.8Lf 	 : 2.36500000
%+9.8f 		 : +0.00000000
%+9.8hf 	 : +0.00000000
%+9.8lf 	 : +0.00000000
%+9.8Lf 	 : +2.36500000
% 9.8f 		 :  0.00000000
% 9.8hf 	 :  0.00000000
% 9.8lf 	 :  0.00000000
% 9.8Lf 	 :  2.36500000
%09.8f 		 : 0.00000000
%09.8hf 	 : 0.00000000
%09.8lf 	 : 0.00000000
%09.8Lf 	 : 2.36500000
%-9.9f 		 : 0.000000000
%-9.9hf 	 : 0.000000000
%-9.9lf 	 : 0.000000000
%-9.9Lf 	 : 2.365000000
%+9.9f 		 : +0.000000000
%+9.9hf 	 : +0.000000000
%+9.9lf 	 : +0.000000000
%+9.9Lf 	 : +2.365000000
% 9.9f 		 :  0.000000000
% 9.9hf 	 :  0.000000000
% 9.9lf 	 :  0.000000000
% 9.9Lf 	 :  2.365000000
%09.9f 		 : 0.000000000
%09.9hf 	 : 0.000000000
%09.9lf 	 : 0.000000000
%09.9Lf 	 : 2.365000000


*/
