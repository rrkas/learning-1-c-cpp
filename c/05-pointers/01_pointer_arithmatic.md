# Pointer Arithmetic

## Addition
```c
int i = 4, *j, *k ;
j = &i;      // 65500
j = j + 1;   // 65502
j = j + 9;   // 65520
k = j + 3;   // 65526
```

- A pointer when incremented always points to an immediately next location of **its type**.

## Subtraction
```c
int i = 4, *j, *k ;
j = &i;     // 65500
j = j - 2;  // 65496
j = j - 5;  // 65486
k = j - 6;  // 65474
```

- A pointer when decremented always points to an immediately previous location of **its type**.



## Subtraction of one pointer from another
```c
main( )
{
    int arr[ ] = { 10, 20, 30, 45, 67, 56, 74 } ;
    int *i, *j ;
    i = &arr[1] ;
    j = &arr[5] ;
    printf ( "%d %d", j - i, *j - *i ) ;
}
```


output:
```c
4 36
```

- Suppose the array begins at location `65502`, then the elements `arr[1]` and `arr[5]` would be present at locations `65504` and `65512` respectively, since each integer in the array occupies `two bytes` in memory. The expression `j - i` would print a value `4` and not `8`. This is because `j` and `i` are pointing to locations that are `4` integers apart.


## Comparison of two pointer variables
```c
main( )
{
    int arr[ ] = { 10, 20, 36, 72, 45, 36 } ;
    int *j, *k ;
    j = &arr [ 4 ] ;
    k = ( arr + 4 ) ;
    if ( j == k )
        printf ( "The two pointers point to the same location" ) ;
    else
        printf ( "The two pointers do not point to the same location" ) ;
}
```

- Pointer variables can be compared provided both variables point to objects of the **same data type**. Such comparisons can be useful when both pointer variables point to elements of the same array.

- a pointer variable can be compared with `zero` (usually expressed as `NULL`)

**Invalid** operations:
- Addition of two pointers
- Multiplication of a pointer with a constant
- Division of a pointer with a constant
