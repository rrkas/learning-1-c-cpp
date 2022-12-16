# print string

```c
#include <stdio.h>
main()
{
    char name[] = "Klinsman";
    int i = 0;
    while (i <= 7)
    {
        printf("%c", name[i]);
        i++;
    }
}

```


```c
main( )
{
    char name[ ] = "Klinsman" ;
    int i = 0 ;
    while ( name[i] != `\0' )
    {
        printf ( "%c", name[i] ) ;
        i++ ;
    }
}
```

```c
main( )
{
    char name[ ] = "Klinsman" ;
    char *ptr ;
    ptr = name ; /* store base address of string */
    while ( *ptr != `\0' )
    {
        printf ( "%c", *ptr ) ;
        ptr++ ;
    }
}
```

```c
main( )
{
    char name[ ] = "Klinsman" ;
    printf ( "%s", name ) ;
}
```
