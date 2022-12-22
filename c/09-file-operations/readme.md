# File Operations

- Data Organization
- File Operations
    - Opening a File
    - Reading from a File
    - Closing the File
- File Opening Modes
- String (line) I/O in Files
- Record I/O in Files
- Text Files and Binary Files
- Low Level Disk I/O
- I/O Under Windows

## example
```c
/* Display contents of a file on screen. */
# include "stdio.h"
main( )
{
    FILE *fp ;
    char ch ;
    fp = fopen ( "data.txt", "r" ) ;
    while ( 1 )
    {
        ch = fgetc ( fp ) ;
        if ( ch == EOF )
            break ;
        printf ( "%c", ch ) ;
    }
    fclose ( fp ) ;
}
```

## The Awkward Newline

- when we attempt to write a `\n` to the file using `fputs( )`, `fputs( )` converts the `\n` to `\r\n` combination. 
- Here `\r` stands for carriage return and `\n` for linefeed.
- If we read the same line back using `fgets( )` the reverse conversion happens.
- Thus conversion of `\n` to `\r\n` during writing and `\r\n` conversion to `\n` during reading is a feature of the standard library functions and not that of the OS. 
- Hence the OS counts `\r` and `\n` as separate characters.
