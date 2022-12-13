# nested `if`

## syntax
```c
if (expression) {
    if (expression) {
        if (expression) {
            if (expression) {
                ...
            } else {
                ...
            }
        } else {
            if (expression) {
                ...
            } else {
                ...
            }
        }
    } else {
        ...
    }
} else {
    ...
}
```

## Example
```c
int a;
printf("%d", &a);
if (a % 4 == 0) {
    if (a % 400 == 0) {
        printf("Leap year");
    } else {
        if (a % 100 == 0)
            printf("Not a leap year");
        else
            printf("Leap year");
    }
} else {
    printf("Not a leap year");
}
```
