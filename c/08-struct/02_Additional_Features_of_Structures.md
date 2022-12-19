# Additional Features of Structures

1. Assignment and Copying
    - The values of a structure variable can be assigned to another structure variable of the same type using the assignment operator.
    - It is not necessary to copy the structure elements piece-meal. It is preferred to use assignment to piece-meal copying.
    ```c
    main( )
    {
        struct employee
        {
            char name[10] ;
            int age ;
            float salary ;
        };
        struct employee e1 = { "Sanjay", 30, 5500.50 } ;
        struct employee e2, e3 ;
        
        /* piece-meal copying */
        strcpy ( e2.name, e1.name ) ;
        e2.age = e1.age ;
        e2.salary = e1.salary ;
        
        /* copying all elements at one go */
        e3 = e2 ;
        e3.age = 40;

        printf ( "\n%s %d %f", e1.name, e1.age, e1.salary ) ;
        printf ( "\n%s %d %f", e2.name, e2.age, e2.salary ) ;
        printf ( "\n%s %d %f", e3.name, e3.age, e3.salary ) ;
    }
    ```

    output:
    ```
    Sanjay 30 5500.500000
    Sanjay 30 5500.500000
    Sanjay 40 5500.500000
    ```

    - Ability to copy the contents of all structure elements of one variable into the corresponding elements of another structure variable is rather surprising, since C does not allow assigning the contents of one array to another just by equating the two.

1. Nested structures
    - One structure can be nested within another structure.
    - Using this facility complex data types can be created.
    ```c
    main( )
    {
        struct address
        {
            char phone[15] ;
            char city[25] ;
            int pin ;
        };
        struct emp
        {
            char name[25] ;
            struct address a ;
        };
        struct emp e = { "jeru", "531046", "nagpur", 10 };
        printf ( "\nname = %s phone = %s", e.name, e.a.phone ) ;
        printf ( "\ncity = %s pin = %d", e.a.city, e.a.pin ) ;
    }
    ```

    output:
    ```
    name = jeru phone = 531046
    city = nagpur pin = 10
    ```

    - For accessing the element of a structure that is part of another structure the dot operator is used twice:
    ```c
    e.a.pin
    ```

1. Passing structure to function
    - We may either pass individual structure elements or the entire structure variable at one go.
    ```c
    struct book
    {
        char name[25] ;
        char author[25] ;
        int callno ;
    };

    void main( )
    {
        struct book b1 = { "Let us C", "YPK", 101 } ;
        display_elements ( b1.name, b1.author, b1.callno ) ;
        display ( b1 ) ;
    }

    void display_elements ( char *s, char *t, int n )
    {
        printf ( "\n%s %s %d", s, t, n ) ;
    }

    void display ( struct book b )
    {
        printf ( "\n%s %s %d", b.name, b.author, b.callno ) ;
    }
    ```

1. Pointer to structure
    - we can have a pointer pointing to a struct. Such pointers are known as ‘**structure pointers**’.
    ```c
    main( )
    {
        struct book
        {
            char name[25] ;
            char author[25] ;
            int callno ;
        };
        struct book b1 = { "Let us C", "YPK", 101 } ;
        struct book *ptr ;
        
        ptr = &b1 ;
        
        printf ( "\n%s %s %d", b1.name, b1.author, b1.callno ) ;
        printf ( "\n%s %s %d", ptr->name, ptr->author, ptr->callno ) ;
    }
    ```

    - We can’t use `ptr.name` or `ptr.callno` because `ptr` is not a structure variable but a pointer to a structure, and the dot operator requires a structure variable on its left.
    - C provides an operator `->`, called an **arrow operator** to refer to the structure elements.
    - on the left hand side of the ‘`.`’ structure operator, there **must** always be a **structure variable**  
    whereas  
    on the left hand side of the ‘`->`’ operator there **must** always be a **pointer to a structure**.

    ```c
    /* Passing address of a structure variable */
    struct book
    {
        char name[25] ;
        char author[25] ;
        int callno ;
    };

    main( )
    {
        struct book b1 = { "Let us C", "YPK", 101 } ;
        display ( &b1 ) ;
    }

    display ( struct book *b )
    {
        printf ( "\n%s %s %d", b->name, b->author, b->callno ) ;
    }
    ```

1. Holes in memory allocation & solution
    ```c
    struct emp
    {
        int a ;
        char ch ;
        float s ;
    };
    struct emp e ;
    printf ( "%u %u %u", &e.a, &e.ch, &e.s ) ;
    ```

    TC/TC++ compiler output:
    ```
    65518 65520 65521
    ```

    - in memory the `char` begins immediately after the `int` and `float` begins immediately after the `char`.


    VC++ compiler output:
    ```
    1245044 1245048 1245052
    ```

    - It can be observed from this output that the `float` doesn’t get stored immediately after the `char`. In fact there is a **hole of three bytes** after the `char`.

    - VC++ is a 32-bit compiler targeted to generate code for a 32-bit microprocessor.

    - The architecture of this microprocessor is such that it is able to fetch the data that is present at an address, which is a multiple of **four** much faster than the data present at any other address.

    - VC++ compiler aligns every element of a structure at an address that is **multiple of four**. That’s the reason why there were **three holes** created between the `char` and the `float`.

    Solution:
    ```c
    #pragma pack(1)
    struct emp
    {
        int a ;
        char ch ;
        float s ;
    };
    #pragma pack( )
    struct emp e ;
    printf ( "%u %u %u", &e.a, &e.ch, &e.s ) ;
    ```

    output:
    ```
    1245044 1245048 1245049
    ```

    - `#pragma pack ( 1 )` lets each structure element to begin on a 1-byte boundary


