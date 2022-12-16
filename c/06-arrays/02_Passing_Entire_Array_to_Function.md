# Passing an Entire Array to a Function

```c
main( )
{
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ;
    dislpay ( &num[0], 6 ) ;
}

display ( int *j, int n )
{
    int i;
    for ( i = 0 ; i <= n - 1 ; i++ )
    {
        printf ( "element = %d\n", *j ) ;
        j++ ;
    }
}
```

- The following two function calls are same:
    ```c
    display ( &num[0], 6 ) ;
    display ( num, 6 ) ;
    ```
