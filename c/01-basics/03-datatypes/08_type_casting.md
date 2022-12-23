# type casting

```c
#include<stdio.h>
void main() {
    float a;
    int x = 6, y = 4;
    a = x / y;
    printf("\nvalue of a = %f", a);
}
```

output:
```
value of a = 1.000000
```

- answer is `1.000000` and not `1.5` 
- `6` and `4` are both integers, hence `6 / 4` yields `1`
- this `1` is then stored in `a` and converted to `1.000000`

Solution:
- make `x` or `y` float
- type casting

## example

```c
#include<stdio.h>
void main() {
    float a;
    int x = 6, y = 4;
    a = (float) x / y;
    printf("\nvalue of a = %f", a);
}
```

output:
```
value of a = 1.500000
```

- **type casting** consists of putting a pair of parentheses around the name of the data type

```c
a = (float) x / y;
```

- expression `(float)` causes the variable `x` to be converted to `float` before being used for division


```c
#include<stdio.h>
void main() {
    float a = 6.35;
    printf("\nValue of a on type casting = %d", (int) a);
    printf("\nValue of a = %f", a);
}
```

output:
```
Value of a on type casting = 6
Value of a = 6.350000
```

- value of `a` doesn't get permanently changed as a result of type casting
- it is the value of the expression that undergoes type conversion whenever the cast appears
