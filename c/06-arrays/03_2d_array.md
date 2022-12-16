# Two Dimensional Arrays

## example
```c
main( )
{
    int stud[4][2] ;
    int i, j ;
    for ( i = 0 ; i <= 3 ; i++ )
    {
        printf ( "\n Enter roll no. and marks" ) ;
        scanf ( "%d %d", &stud[i][0], &stud[i][1] ) ;
    }
    for ( i = 0 ; i <= 3 ; i++ )
        printf ( "\n%d %d", stud[i][0], stud[i][1] ) ;
}
```

## Initialising
example:
```c
int stud[4][2] = {
    { 1234, 56 },
    { 1212, 33 },
    { 1434, 80 },
    { 1312, 78 }
};
```

or

```c
int stud[4][2] = { 1234, 56, 1212, 33, 1434, 80, 1312, 78 } ;
```

or

```c
int stud[ ][2] = { 1234, 56, 1212, 33, 1434, 80, 1312, 78 } ;
```

## Memory Map

example:
```c
int arr[2][3] = { 12, 34, 23, 45, 56, 45 } ;
```

| index | `arr[0][0]` | `arr[0][1]` | `arr[1][0]` | `arr[1][1]` | `arr[2][0]` | `arr[2][1]` |
| - | - | - | - | - | - | - |
| value | 12 | 34 | 23 | 45 | 56 | 45 |
| address | 65508 | 65510 | 65512 | 65514 | 65516 | 65518 |

## Pointers (2-D array is an array of arrays)
```c
main( )
{
    int s[4][2] = {
        { 1234, 56 },
        { 1212, 33 },
        { 1434, 80 },
        { 1312, 78 }
    };
    int i ;
    for ( i = 0 ; i <= 3 ; i++ )
        printf ( "\nAddress of %d th 1-D array = %u", i, s[i] ) ;
}
```

output:
```
Address of 0 th 1-D array = 65508
Address of 1 th 1-D array = 65512
Address of 2 th 1-D array = 65516
Address of 3 th 1-D array = 65520
```

- The compiler knows that's is an array containing 4 one-dimensional arrays, each containing 2 integers.
- Each one-dimensional array occupies 4 bytes (two bytes for each integer).
- These one-dimensional arrays are placed linearly (zeroth 1-D array followed by first 1-D array, etc.)
- each one-dimensional arrays starts 4 bytes further along than the last one

| index | `s[0][0]` | `s[0][1]` | `s[1][0]` | `s[1][1]` | `s[2][0]` | `s[2][1]` | `s[3][0]` | `s[3][1]` |
| - | - | - | - | - | - | - | - | - |
| value | 1234 | 56 | 1212 | 33 | 1434 | 80 | 1312 | 78 |
| address | 65508 | 65510 | 65512 | 65514 | 65516 | 65518 | 65520 | 65522 |

- we have been able to reach each one-dimensional array.
- Suppose we want to refer to the element `s[2][1]` using pointers.
    - We know (from the above program) that `s[2]` would give the address `65516`, the address of the second one-dimensional array.
    - `( 65516 + 1 )` would give the address `65518` OR `( s[2] + 1 )` would give the address `65518`
    - value at this address can be obtained by using the value at address operator, saying `*( s[2] + 1 )`.
    - `*( s[2] + 1 )` is same as, `*( *( s + 2 ) + 1 )`

        ```
        s[2][1]
        * ( s[2] + 1 )
        * ( * ( s + 2 ) + 1 )
        ```

## Passing 2-D Array to a Function

```c
main( )
{
    int a[3][4] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9, 0, 1, 6
    };
    display ( a, 3, 4 ) ;
    show ( a, 3, 4 ) ;
    print ( a, 3, 4 ) ;
}
display ( int *q, int row, int col )
{
    int i, j ;
    for ( i = 0 ; i < row ; i++ )
    {
        for ( j = 0 ; j < col ; j++ )
            printf ( "%d ", * ( q + i * col + j ) ) ;
        
        printf ( "\n" ) ;
    }
    printf ("\n" ) ;
}
show ( int ( *q )[4], int row, int col )
{
    int i, j ;
    int *p ;
    for ( i = 0 ; i < row ; i++ )
    {
        p=q+i;
        for ( j = 0 ; j < col ; j++ )
            printf ( "%d ", * ( p + j ) ) ;
        
        printf ( "\n" ) ;
    }
    printf ( "\n" ) ;
}
print ( int q[ ][4], int row, int col )
{
    int i, j ;
    for ( i = 0 ; i < row ; i++ )
    {
        for ( j = 0 ; j < col ; j++ )
            printf ( "%d ", q[i][j] ) ;

        printf ( "\n" ) ;
    }
    printf ( "\n" ) ;
}
```

output:
```
1234
5678
9016

1234
5678
9016

1234
5678
9016
```

