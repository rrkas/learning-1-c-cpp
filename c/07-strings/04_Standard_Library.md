# Standard Library

[Details of string.h](../../references/header_files/string.h.md)

## `strlen( )`

```c
main( )
{
    char arr[ ] = "Bamboozled" ;
    int len1, len2 ;
    len1 = strlen ( arr ) ;
    len2 = strlen ( "Humpty Dumpty" ) ;
    printf ( "\nstring = %s length = %d", arr, len1 ) ;
    printf ( "\nstring = %s length = %d", "Humpty Dumpty", len2 ) ;
}
```

- While calculating the length it doesn’t count ‘`\0`’.

Output:
```
string = Bamboozled length = 10
string = Humpty Dumpty length = 13
```

## `strcpy( )`

```c
main( )
{
    char source[ ] = "Sayonara" ;
    char target[20] ;
    strcpy ( target, source ) ;
    printf ( "\nsource string = %s", source ) ;
    printf ( "\ntarget string = %s", target ) ;
}
```

output:
```
source string = Sayonara
target string = Sayonara
```

## `strcat( )`
```c
main( )
{
    char source[ ] = "Folks!" ;
    char target[30] = "Hello" ;
    strcat ( target, source ) ;
    printf ( "\nsource string = %s", source ) ;
    printf ( "\ntarget string = %s", target ) ;
}
```

output:
```
source string = Folks!
target string = HelloFolks!
```

## `strcmp( )`
```c
main( )
{
    char string1[ ] = "Jerry" ;
    char string2[ ] = "Ferry" ;
    int i, j, k ;
    i = strcmp ( string1, "Jerry" ) ;
    j = strcmp ( string1, string2 ) ;
    k = strcmp ( string1, "Jerry boy" ) ;
    printf ( "\n%d %d %d", i, j, k ) ;
}
```

output:
```
0 4 -32
```

| value | description |
| - | - |
| -ve | first string is alphabetically before the second string |
| +ve | first string is alphabetically after the second string |
| 0 | exact match |

