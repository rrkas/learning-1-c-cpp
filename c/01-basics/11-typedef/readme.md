# `typedef`

- used to redefine the name of an existing datatype/ variable type
- provides short and meaningful way to call a datatype
- usually uppercase letters are used to name the redefined datatype

example:
```c
typedef unsigned long int ULI;
ULI v1, v2;
```

instead of:
```c
unsigned long int v1, v2;
```

## `typedef` and `struct`

```c
struct employee {
    char name[30];
    int age;
    float bs;
};
typedef struct employee EMP;
EMP e1, e2;
e1.age = 32;
```

or

```c
typedef struct employee {
    char name[30];
    int age;
    float bs;
} EMP;
EMP e1, e2;
e1.age = 32;
```

## `typedef` and pointers

```c
struct employee {
    char name[30];
    int age;
    float bs;
};
typedef struct employee *EMP;
EMP e1, e2;
e1 -> age = 32;
```


