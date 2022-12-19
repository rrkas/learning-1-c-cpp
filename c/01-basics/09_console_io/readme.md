# Console Input/Output functions

## Formatted functions

| Type | Input | Output |
| - | - | - |
| `char` | `scanf( )` | `printf( )` |
| `int` | `scanf( )` | `printf( )` |
| `floats` | `scanf( )` | `printf( )` |
| `string` | `scanf( )` | `printf( )` |

- These functions allow us to supply the input in a fixed format and let us obtain the output in the specified form.
- The format string can contain:
    - Characters that are simply printed as they are
    - Conversion specifications that begin with a `%` sign
    - Escape sequences that begin with a `\` sign

| Data type |  | Format specifier |
| - | - | - |
| Integer | short signed | `%d` or `%i` |
|  | short unsigned | `%u` |
|  | long singed | `%ld` |
|  | long unsigned | `%lu` |
|  | unsigned hexadecimal | `%x` |
|  | unsigned octal | `%o` |
| Real | float | `%f` |
|  | double | `%lf` |
|  | double | `%lf` |
| Character | signed character | `%c` |
|  | unsigned character | `%c` |
| String |  | `%s` |


| Escape Sequence | Purpose |
| - | - |
| `\n` | new line |
| `\t` | tab |
| `\b` | backspace |
| `\r` | carriage return |
| `\f` | form feed |
| `\f` | alert |
| `\'` | single quote |
| `\"` | double quote |
| `\\` | back slash |

## Unformatted functions

| Type | Input | Output |
| - | - | - |
| `char` | `getch( )` | `putch( )` |
|  | `getche( )` | - |
|  | `getchar( )` | `putchar( )` |
| `int` | - | - |
| `float` | - | - |
| `string` | `gets( )` | `puts( )` |

- `getch()`
    - read a single character the instant it is typed without waiting for the Enter key to be hit
    - doesn't echo the character that you typed to the screen.

- `getche()`
    - read a single character the instant it is typed without waiting for the Enter key to be hit
    - echoes (displays) the character that you typed to the screen.

- `getchar()` & `fgetchar()`
    - read a single character (needs enter key)
    - echoes (displays) the character that you typed to the screen.
    - `getchar()` is macro whereas `fgetchar()` is function.

