# Low Level Disk I/O

In low level disk I/O, data cannot be written as individual characters, or as strings or as formatted data. There is only one way data can be written or read in low level disk I/O functions - as a buffer full of bytes.

Low level disk I/O functions offer following advantages:
- Since these functions parallel the methods that the OS uses to write to the disk, they are more efficient than the high level disk I/O functions.
- Since there are fewer layers of routines to go through, low level I/O functions operate faster than their high level counterparts.

## A Low Level File-copy Program

```c
/* File-copy program which copies text, .com and .exe files */
#include "fcntl.h"
#include "types.h" /* if present in sys directory use "c:tc\\include\\sys\\types.h" */
#include "stat.h" /* if present in sys directory use "c:\\tc\\include\\sys\\stat.h" */
main ( int argc, char *argv[ ] )
{
    char buffer[ 512 ], source [ 128 ], target [ 128 ] ;
    int inhandle, outhandle, bytes ;
    printf ( "\nEnter source file name" ) ;
    gets ( source ) ;
    inhandle = open ( source, O_RDONLY | O_BINARY ) ;
    if ( inhandle == -1 )
    {
        puts ( "Cannot open file" ) ;
        exit( ) ;
    }
    printf ( "\nEnter target file name" ) ;
    gets ( target ) ;
    outhandle = open ( target, O_CREAT | O_BINARY | O_WRONLY, S_IWRITE ) ;
    if ( inhandle == -1 )
    {
        puts ( "Cannot open file" ) ;
        close ( inhandle ) ;
        exit( ) ;
    }
    while ( 1 )
    {
        bytes = read ( inhandle, buffer, 512 ) ;
        if ( bytes > 0 )
            write ( outhandle, buffer, bytes ) ;
        else
            break ;
    }
    close ( inhandle ) ;
    close ( outhandle ) ;
}
```

- ‘O-flags’ are defined in the file “fcntl.h”

- When two or more O-flags are used together, they are combined using the bitwise OR operator ( `|` ).

- Instead of returning a `FILE` pointer as `fopen( )` did, in low level
disk I/O, `open( )` returns an integer value called ‘**file handle**’.<br> This
is a number assigned to a particular file, which is used thereafter to
refer to the file.<br> If `open( )` returns a value of `-1`, it means that the
file couldn’t be successfully opened.


