# Enumerated Datatype (`enum`)

- enums give opportunity to invent own datatype and define what values the variable of this datatype can take

```c
enum mar_status {
    single, married, divorced, widowed  // enumerators
}; // enum declaration
enum mar_status person1, person2; // declaring variables of enum
person1 = single; // assigning values
person2 = married;
```

- the values being assigned MUST be in the enumerators of the enum
- internally, compiler treats enumerators as integers, starting with 0.
    - single = 0
    - married = 1
    - divorced = 2
    - widowed = 3

This will cause error:
```c
person1 = unknown;
```

But this is legal, provided the integer is in enumerators:
```c
person1 = 0;
```

## Overriding values of enumerators
```c
enum mar_status {
    single = 100, married = 2, divorced = 315, widowed = 404
}; 
enum mar_status person1, person2;
person1 = single;
person2 = 315;
```

## Alternate
- macros can be used instead of enums
    ```c
    #define ASSEMBLY 0
    #define MANUFACTURING 1
    #define ACCOUNTS 2
    #define STORES 3

    int department = ASSEMBLY;
    int department2 = 0;
    ```

    - enums are preferred over macros
        - scope of enum can be local or global
        - scope of macros is global only


