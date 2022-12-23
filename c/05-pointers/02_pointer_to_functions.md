# Pointer to Functions

## functions in C have addresses  
```c
#include<stdio.h>
void display() {
    puts("Inside display function\n");
}

void main() {
    printf("Address of 'display': %u\n", display);
    display();
}
```

output:
```
Address of 'display': 1125
Inside display function
```

- function name is the pointer to the function

## invoking function using address

```c
#include<stdio.h>
void display() {
    puts("Inside display function\n");
}

void main() {
    void (*func_ptr)(); // similar to function prototype
    func_ptr = display;
    printf("Address of 'display': %u\n", func_ptr);
    (*func_ptr)(); // invoke
}
```

output:
```
Address of 'display': 1125
Inside display function
```

## usage
- implementing callback mechanism
- binding functions dynamically (in C++)

