# `sprintf()` and `sscanf()`

## `sprintf()`

```c
main( )
{
    int i = 10 ;
    char ch = 'A' ;
    float a = 3.14 ;
    char str[20] ;
    printf ( "\n%d %c %f", i, ch, a ) ;
    sprintf ( str, "%d %c %f", i, ch, a ) ;
    printf ( "\n%s", str ) ;
}
```

- `sprintf( )` writes the output to an array of characters.
- `sscanf( )` allows us to read characters from a string and to convert and store them in C variables according to specified formats.
