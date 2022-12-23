# functions returning pointers

```c
int *func() {
    static int i;
    return &i;
}

void main() {
    int *p;
    p = func();
    printf("value of i = %d", *p);
}
```

## example
```c
char *copy(char *t, char *s) {
    char *r;
    r = t;
    while ( *s != '\0' ) {
        *t = *s;
        t++;
        s++;
    }
    *t = '\0';
    return r;
}

void main() {
    char *str;
    char source[] = "jaded";
    char target[10];
    str = copy(target, source);
    printf("%s", str);
}
```
