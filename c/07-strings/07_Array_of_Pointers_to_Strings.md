# Array of Pointers to Strings

```c
main( )
{
    char names[ ][10] = {
        "akshay",
        "parag",
        "raman",
        "srinivas",
        "gopal",
        "rajesh"
    };
    int i ;
    char t ;
    printf ( "\nOriginal: %s %s", &names[2][0], &names[3][0] ) ;
    for ( i = 0 ; i <= 9 ; i++ )
    {
        t = names[2][i] ;
        names[2][i] = names[3][i] ;
        names[3][i] = t ;
    }
    printf ( "\nNew: %s %s", &names[2][0], &names[3][0] ) ;
}
```

or

```c
main( )
{
    char *names[ ] = {
        "akshay",
        "parag",
        "raman",
        "srinivas",
        "gopal",
        "rajesh"
    };
    char *temp ;
    printf ( "Original: %s %s", names[2], names[3] ) ;
    temp = names[2] ;
    names[2] = names[3] ;
    names[3] = temp ;
    printf ( "\nNew: %s %s", names[2], names[3] ) ;
}
```

output:
```
Original: raman srinivas
New: srinivas raman
```

## Limitation
- When we are using a two-dimensional array of characters we are at liberty to either initialize the strings where we are declaring the array, or receive the strings using `scanf( )` function.
- when we are using an array of pointers to strings we can initialize the strings at the place where we are declaring the array, but we cannot receive the strings from keyboard using `scanf( )`.

```c
main( )
{
    char *names[6] ;
    int i ;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        printf ( "\nEnter name " ) ;
        scanf ( "%s", names[i] ) ;
    }
}
```

- when we are declaring the array it is containing garbage values.
- And it would be definitely wrong to send these garbage values to `scanf( )` as the addresses where it should keep the strings received from the keyboard.

### solution (dynamic memory allocation)
```c
#include <alloc.h>
main( )
{
    char *names[6] ;
    char n[50] ;
    int len, i ;
    char *p ;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        printf ( "\nEnter name " ) ;
        scanf ( "%s", n ) ;
        len = strlen ( n ) ;
        p = malloc ( len + 1 ) ;
        strcpy ( p, n ) ;
        names[i] = p ;
    }
    for ( i = 0 ; i <= 5 ; i++ )
        printf ( "\n%s", names[i] ) ;
}
```

- we have first received a name using `scanf( )` in a string `n[ ]`
- we have found out its length using `strlen( )` and allocated space for making a copy of this name.
- This memory allocation has been done using a standard library function called `malloc( )`.
    - This function requires the number of bytes to be allocated and returns the base address of the chunk of memory that it allocates.
    - The address returned by this function is always of the type void *.
    - it has been converted into char * using typecasting.
- Once we have allocated the memory using `malloc( )` we have copied the name received through the keyboard into this allocated space and finally stored the address of the allocated chunk in the appropriate element of `names[ ]`, the array of pointers to strings.

