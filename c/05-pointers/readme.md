# Pointer

- A pointer is variable that stores address of a location
- It can store address of other variables

## Explanation though example

```c
int i = 3;
```

This declaration tells the C compiler to:

- Reserve space in memory to hold the integer value.
- Associate the name i with this memory location.
- Store the value 3 at this location.

We may represent `i`’s location in memory by the following memory map:

| memory address | variable name | value |
| - | - | - |
| 65524 | `i` | 3 |

- We see that the computer has selected memory location 65524 as the place to store the value 3.
- The location number 65524 is not a number to be relied upon, because some other time the computer may choose a different location for storing the value 3.
- The important point is, i’s address in memory is a number.

We can print this address number through the following program:
```c
main()
{
    int i = 3;
    printf("Address of i = %u\n", &i);
    printf("Value of i = %d\n", i);
}
```

output:
```
Address of i = 65524
Value of i = 3
```

- '`&`' used in this statement is C's '**address of**' operator.
- `&i` returns the address of the variable `i`
- '`*`' is called '**value at address**' operator/ '**indirection**' operator
- value of `*(&i)` is same as the value of `i`
- This address can be collected in a variable by
    ```c
    int *j = &i;
    ```
    or
    ```c
    int *j;
    j = &i;
    ```
    `*j` is same as `*(&i)`


## Pointer of pointer

```c
main()
{
    int i = 3, *j, **k;
    j = &i;
    k = &j;
    
    printf("\nAddress of i = %u", &i);
    printf("\nAddress of i = %u", j);
    printf("\nAddress of i = %u", *k);
    printf("\nAddress of j = %u", &j);
    printf("\nAddress of j = %u", k);
    printf("\nAddress of k = %u", &k);
    printf("\nValue of j = %u", j);
    printf("\nValue of k = %u", k);
    printf("\nValue of i = %d", i);
    printf("\nValue of i = %d", *(&i));
    printf("\nValue of i = %d", *j);
    printf("\nValue of i = %d", **k);
}
```

output:
```
Address of i = 65524
Address of i = 65524
Address of i = 65524
Address of j = 65522
Address of j = 65522
Address of k = 65520
Value of j = 65524
Value of k = 65522
Value of i = 3
Value of i = 3
Value of i = 3
Value of i = 3
```

| memory address | variable name | value |
| - | - | - |
| 65524 | `i` | 3 |
| 65522 | `j` | 65524 |
| 65520 | `k` | 65522 |
