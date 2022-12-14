# `do`-`while` loop

## syntax

```c
do {
    statements;
} while (expression);
```

## example
```c
int i = 1;
do {
    printf("%d\n", i);
    i++;
} while (i <= 10);
```

output
```
1
2
3
4
5
6
7
8
9
10
```

## Note:
- do-while loop is executed atleast once even if the condition is false from start
    ```c
    int i = 12;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    ```
    output:
    ```
    12
    ```
