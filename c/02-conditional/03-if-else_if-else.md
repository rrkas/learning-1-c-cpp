# `if` - `else` `if` - `else`

## Syntax
```c
if (expression)
    statement;
else if (expression)
    statement;
else
    statement;
```

or

```c
if (expression) {
    statement;
    statement;
    statement;
    ...
    statement;
} else if (expression) {
    statement;
    statement;
    statement;
    ...
    statement;
} else {
    statement;
    statement;
    statement;
    ...
    statement;
}
```

## Example
```c
int a;
scanf("%d", &a);
a = a % 3;
if (a == 0) {
    printf("Option 1");
} else if (a == 1) {
    printf("Option 2");
} else {
    printf("Option 3");
}
```
