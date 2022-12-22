# Error handling

```c
#include "stdio.h"
main( )
{
    FILE *fp ;
    char ch ;
    fp = fopen ( "TRIAL", "w" ) ;
    while ( !feof ( fp ) )
    {
        ch = fgetc ( fp ) ;
        if ( ferror( ) )
        {
            perror ( "TRIAL" ) ;
            break ;
        }
        else
            printf ( "%c", ch ) ;
    }
    fclose ( fp ) ;
}
```

- The moment the error occurs `ferror( )` returns a **non-zero value**
- `perror( )` : prints the error message specified by the compiler.

