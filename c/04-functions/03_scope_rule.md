# Understanding Scopes

```c
display (int j)
{
    int k = 35 ;
    printf ("%d\n", j);
    printf ("%d\n", k);
}
main()
{
    int i = 20 ;
    display(i);
}
```

Output:
```
20
35
```

- it is **necessary** to pass the value of the variable `i` to the function `display()`
- it will **not** become automatically available to the function `display()`
- default the scope of a variable is **local** to the function in which it is defined.

