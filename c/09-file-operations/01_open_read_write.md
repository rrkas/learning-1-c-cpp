# Opening a File
- To open the file we have called the function `fopen( )`.
- `fopen( )` performs three important tasks when you open the file in `"r"` mode:
    - Firstly it searches on the disk the file to be opened.
    - Then it loads the file from the disk into a place in memory called **buffer**.
        - read the contents of the file into the buffer while opening the file and then read the file character by character from the buffer rather than from the disk.
    - It sets up a character pointer that points to the first character of the **buffer**.
- To be able to successfully read from a file information like mode of opening, size of file, place in the file from where the next read operation would be performed, etc. has to be maintained. 
- Since all this information is inter-related, all of it is gathered together by `fopen( )` in a structure called `FILE`.
- `fopen( )` returns the address of this structure, which we have collected in the structure pointer called `fp`.
- The `FILE` structure has been defined in the header file `stdio.h`. Therefore, it is necessary to `#include` this file.
- once the file has been opened, we no longer refer to the file by its name, but through the file pointer `fp`.

## Trouble in Opening a File
- There is a possibility that when we try to open a file using the function `fopen( )`, the file may not be opened.
- While opening the file in “`r`” mode, this may happen because the file being opened may not be present on the disk at all.
- while opening the file for writing, `fopen( )` may fail due to a number of reasons, like, disk space may be insufficient to open a new file, or the disk may be write protected or the disk is damaged and so on.
- If the file opening fails due to any of the several reasons mentioned above, the `fopen( )` function returns a value `NULL`
```c
#include "stdio.h"
main( )
{
    FILE *fp ;
    fp = fopen ( "PR1.C", "r" ) ;
    if ( fp == NULL )
    {
        puts ( "cannot open file" ) ;
        exit( ) ;
    }
}
```

# Reading from a File
- To read the file’s contents from memory there exists a function called `fgetc( )`:
    ```c
    int ch = fgetc ( fp ) ;
    ```
    `fgetc( )` reads the character from the current pointer position, advances the pointer position so that it now points to the next character, and returns the character that is read, which we collected in the variable `ch`.
- **End of File (EOF)** is a special character, whose *ASCII* value is **26**, signifies end of file. This character is inserted beyond the last character in the file, when it is created.
- While reading from the file, when `fgetc( )` encounters this special character, instead of returning the character that it has read, it returns the macro `EOF`.  
The `EOF` macro has been defined in the file `stdio.h`.  


# Writing into a file
- Instead of writing characters in the file on the disk one character at a time it would be more efficient to write characters in a buffer and then finally transfer the contents from the buffer to the disk.

# Closing the File
```c
fclose ( fp ) ;
```

- Once we close the file we can no longer read from it using `getc( )` unless we reopen the file.
- to close the file we don’t use the filename but the file pointer `fp`.
- On closing the file the buffer associated with the file is removed from memory.

When we close this file using `fclose( )` three operations would be performed:
- The characters in the buffer would be written to the file on the disk.
- At the end of file a character with ASCII value 26 would get written.
- The buffer would be eliminated from memory.