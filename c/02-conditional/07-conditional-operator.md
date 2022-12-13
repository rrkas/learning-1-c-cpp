# Ternary/ Conditional operator (`?:`)

## Syntax

```c
expression1 ? expression2 : expression3
```

it is equivalent to:
```c
if(expression1) {
    expression2
} else {
    expression3
}
```

## Example
```c
int x, y;
scanf ("%d", &x) ;
y = (x > 5 ? 3 : 4);
/*
The equivalent if statement will be:
if (x > 5)
    y = 3;
else
    y = 4;
*/
printf("%d\n", y);
```
