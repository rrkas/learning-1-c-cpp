# `printf`

prints a formatted string on the screen

## signature
`int printf(const char *format, ...)`

`format` − This is the string that contains the text to be written to stdout. It can optionally contain embedded format tags that are replaced by the values specified in subsequent additional arguments and formatted as requested. Format tags prototype is `%[flags][width][.precision][length]specifier`

## options

| specifier | output |
| - | - |
| `c` | Character |
| `d` or `i` | Signed decimal integer |
| `e` | Scientific notation (mantissa/exponent) using e character |
| `E` | Scientific notation (mantissa/exponent) using E character |
| `f` | Decimal floating point |
| `g` | Uses the shorter of `%e` or `%f` |
| `G` | Uses the shorter of `%E` or `%f` |
| `o` | Signed octal |
| `s` | String of characters |
| `u` | Unsigned decimal integer |
| `x` | Unsigned hexadecimal integer |
| `X` | Unsigned hexadecimal integer (capital letters) |
| `p` | Pointer address |
| `n` | Nothing printed |
| `%` | Character |


| Flags | Description |
| - | - |
| `-` | Left-justify within the given field width; Right justification is the default (see width sub-specifier). |
| `+` | Forces to precede the result with a plus or minus sign (+ or -) even for positive numbers. <br>By default, only negative numbers are preceded with a -ve sign. |
| `(space)` | If no sign is going to be written, a blank space is inserted before the value. |
| `#` | Used with `o`, `x` or `X` specifiers the value is preceded with `0`, `0x` or `0X` respectively for values different than zero.<br> Used with `e`, `E` and `f`, it forces the written output to contain a decimal point even if no digits would follow.<br> By default, if no digits follow, no decimal point is written.<br> Used with `g` or `G` the result is the same as with `e` or `E` but trailing zeros are not removed. |
| `0` | Left-pads the number with zeroes (`0`) instead of spaces, where padding is specified (see width sub-specifier). |


| Width | Description |
| - | - |
| `(number)` | Minimum number of characters to be printed.<br> If the value to be printed is shorter than this number, the result is padded with blank spaces.<br> The value is not truncated even if the result is larger. |
| `*` | The width is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted. |

| .precision | Description |
| - | - |
| `.number` | For integer specifiers (`d`, `i`, `o`, `u`, `x`, `X`) − precision specifies the minimum number of digits to be written.<br> If the value to be written is shorter than this number, the result is padded with leading zeros.<br> The value is not truncated even if the result is longer.<br> A precision of `0` means that no character is written for the value `0`.<br> For `e`, `E` and `f` specifiers − this is the number of digits to be printed after the decimal point.<br> For `g` and `G` specifiers − This is the maximum number of significant digits to be printed.<br> For `s` − this is the maximum number of characters to be printed.<br> By default all characters are printed until the ending null character is encountered.<br> For `c` type − it has no effect.<br> When no precision is specified, the default is `1`.<br> If the period is specified without an explicit value for precision, `0` is assumed. |
| `.*` | The precision is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted. |

| Length | Description |
| - | - |
| `h` | The argument is interpreted as a short int or unsigned short int (only applies to integer specifiers: `i`, `d`, `o`, `u`, `x` and `X`). |
| `l` | The argument is interpreted as a long int or unsigned long int for integer specifiers (`i`, `d`, `o`, `u`, `x` and `X`), and as a wide character or wide character string for specifiers `c` and `s`. |
| `L` | The argument is interpreted as a long double (only applies to floating point specifiers: `e`, `E`, `f`, `g` and `G`). |

Returns:
- If successful, the total number of characters written is returned. 
- On failure, a negative number is returned.
