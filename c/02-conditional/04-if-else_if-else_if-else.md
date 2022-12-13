# `if` - `else` `if` - `else` `if` - ... - `else` (if-else ladder)

## Syntax
```c
if (expression)
    statement;
else if (expression)
    statement;
else if (expression)
    statement;
...
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
} 
else if (expression) {
    statement;
    statement;
    statement;
    ...
    statement;
} 
else if (expression) {
    statement;
    statement;
    statement;
    ...
    statement;
} 
...
else {
    statement;
    statement;
    statement;
    ...
    statement;
}
```

## Example
```c
int year;
printf("Enter a year: ");
scanf("%d", &year);

if (year % 400 == 0) {
    printf("%d is a leap year.", year);
}
else if (year % 100 == 0) {
    printf("%d is not a leap year.", year);
}
else if (year % 4 == 0) {
    printf("%d is a leap year.", year);
}
else {
    printf("%d is not a leap year.", year);
}
```
