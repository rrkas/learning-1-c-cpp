# Structures (`struct`)
1. intro
1. array of structures
1. Nested structures
1. Passing structure to function
1. Pointer to structure
1. Holes in memory allocation & solution

A structure is a group of dissimilar datatypes.

## Why structure
Example without structure:

```c
main( )
{
    char name[3] ;
    float price[3] ;
    int pages[3], i ;
    printf ( "\nEnter names, prices and no. of pages of 3 books\n" ) ;
    for ( i = 0 ; i <= 2 ; i++ )
        scanf ( "%c %f %d", &name[i], &price[i], &pages[i] );
    
    printf ( "\nAnd this is what you entered\n" ) ;
    
    for ( i = 0 ; i <= 2 ; i++ )
        printf ( "%c %f %d\n", name[i], price[i], pages[i] );
}
```

Example with structure:
```c
main( )
{
    struct book
    {
        char name ;
        float price ;
        int pages ;
    };
    struct book b1, b2, b3 ;
    printf ( "\nEnter names, prices & no. of pages of 3 books\n" ) ;
    
    scanf ( "%c %f %d", &b1.name, &b1.price, &b1.pages ) ;
    scanf ( "%c %f %d", &b2.name, &b2.price, &b2.pages ) ;
    scanf ( "%c %f %d", &b3.name, &b3.price, &b3.pages ) ;
    
    printf ( "\nAnd this is what you entered" ) ;
    printf ( "\n%c %f %d", b1.name, b1.price, b1.pages ) ;
    printf ( "\n%c %f %d", b2.name, b2.price, b2.pages ) ;
    printf ( "\n%c %f %d", b3.name, b3.price, b3.pages ) ;
}
```

output in both cases:
```
A 100.00 354
C 256.50 682
F 233.70 512

And this is what you entered
A 100.000000 354
C 256.500000 682
F 233.700000 512
```

## Declaring a Structure
syntax:
```c
struct <structure_name>
{
    structure element 1 ;
    structure element 2 ;
    structure element 3 ;
    ......
    ......
};
```

## Declaring variables of a Structure
examples:
1. separate declaration of structure, separate declaration of variables
    ```c
    struct book
    {
        char name ;
        float price ;
        int pages ;
    };
    struct book b1, b2, b3 ;
    ```

1. simultaneous declaration of structure and declaration of variables
    ```c
    struct book
    {
        char name ;
        float price ;
        int pages ;
    } b1, b2, b3 ;
    ```

1. simultaneous declaration of unnamed structure and declaration of variables
    ```c
    struct
    {
        char name ;
        float price ;
        int pages ;
    } b1, b2, b3 ;
    ```

1. separate declaration of structure, separate declaration and initialization of variables
    ```c
    struct book
    {
        char name[10] ;
        float price ;
        int pages ;
    };
    struct book b1 = { "Basic", 130.00, 550 } ;
    struct book b2 = { "Physics", 150.80, 800 } ;
    ```

- The closing brace in the structure type declaration must be followed by a semicolon.
- It is important to understand that a structure type declaration does **not** tell the compiler to reserve any space in memory. All a structure declaration does is, it defines the ‘form’ of the structure.
- Usually structure type declaration appears at the top of the source code file, before any variables or functions are defined. In very large programs they are usually put in a separate header file, and the file is included (using the preprocessor directive `#include`) in whichever program we want to use this structure type.

## Accessing Structure Elements

syntax:
```c
<variable>.<property>
```

example:
```c
b1.pages
```

## How Structure Elements are Stored

```c
/* Memory map of structure elements */
main( )
{
    struct book
    {
        char name ;
        float price ;
        int pages ;
    };
    struct book b1 = { 'B', 130.00, 550 } ;
    printf ( "\nAddress of name = %u", &b1.name ) ;
    printf ( "\nAddress of price = %u", &b1.price ) ;
    printf ( "\nAddress of pages = %u", &b1.pages ) ;
}
```

output:
```
Address of name = 65518
Address of price = 65519
Address of pages = 65523
```

Memory map:
| property | name | price | pages |
| - | - | - | - |
| value | 'B' | 130.00 | 550 |
| address | 65518 | 65519 | 65523 |


