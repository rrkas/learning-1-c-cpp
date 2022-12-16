# input string

```c
main( )
{
    char name[25] ;
    printf ( "Enter your name " ) ;
    scanf ( "%s", name ) ;
    printf ( "Hello %s!", name ) ;
}
```

- declaration `char name[25]` sets aside `25` bytes under the array `name[ ]`
- `scanf( )` function fills in the characters typed at keyboard into this array until the `enter key` is hit
- Once enter is hit, `scanf( )` places a ‘`\0`’ in the array.
- `scanf( )` is **not** capable of receiving multi-word strings.

Alternate method (can receive multi-word strings)
```c
main( )
{
    char name[25] ;
    printf ( "Enter your full name " ) ;
    gets ( name ) ;
    puts ( "Hello!" ) ;
    puts ( name ) ;
}
```
- `puts( )` can display only one string at a time
- unlike `printf( )`, `puts( )` places the cursor on the next line.
