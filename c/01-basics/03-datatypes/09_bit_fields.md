# bit fields

- if in a program a variable is to take only 2 values: `0` and `1`, we really need only single bit to store it
- but there are no 1 or 2 or n-bit data types in C


## explanation

each employee can:
- gender: male, female `(1 bit)`
- marital status: single, married, divorced, widowed `(2 bits)`
- hobbies: 8 choices `(3 bits)`
- scheme: 15 choices `(4 bits)`

approach:
- 10 bits required altogether
- we can pack all these info in 1 integer (16 bits)

solution:
```c
struct employee {
    unsigned gender : 1;
    unsigned mar_stat : 2;
    unsigned hobby : 3;
    unsigned scheme : 4;
};
```

- colon in the declaration tells compiler about bit fields and number after it tells how many bits to allot for the field.
- once a bit field is established, it can be referenced as any other structure element

## example:

```c
#include<stdio.h>
#define MALE 0
#define FEMALE 1
#define SINGLE 0
#define MARRIED 1
#define DIVORCED 2
#define WIDOWED 3

void main() {
    struct employee {
    unsigned gender : 1;
    unsigned mar_stat : 2;
    unsigned hobby : 3;
    unsigned scheme : 4;
    };
    struct employee e;

    e.gender = MALE;
    e.mar_stat = DIVORCED;
    e.hobby = 5;
    e.scheme = 9;

    printf("\nGender = %d", e.gender);
    printf("\nMarital Status = %d", e.mar_stat);
    printf("\nBytes occupied by e = %d", sizeof( e ));
}
```

output:
```
Gender = 0
Marital Status = 2
Bytes occupied by e = 2
```

