# Standard I/O Devices

| Standard File pointer | Description |
| - | - |
| stdin | standard input device (Keyboard) |
| stdout | standard output device (VDU) |
| stderr | standard error device (VDU) |

- `ch = fgetc ( stdin )` would read a character from the keyboard rather than from a file.
- We can use this statement without any need to use `fopen( )` or `fclose( )` function calls.
- MS-DOS two more standard file pointers are available - `stdprn` and `stdaux`. 
- `stdprn` stands for standard printing device and `stdaux` stands for standard auxiliary device (serial port).


```c
/* Prints file contents on printer */
#include "stdio.h"
main( )
{
    FILE *fp ;
    char ch ;
    fp = fopen ( "poem.txt", "r" ) ;
    if ( fp == NULL )
    {
        printf ( "Cannot open file" ) ;
        exit( ) ;
    }
    while ( ( ch = fgetc ( fp ) ) != EOF )
        fputc ( ch, stdprn ) ;
    
    fclose ( fp ) ;
}
```

