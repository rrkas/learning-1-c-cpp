# `break` and `continue` statements

`break` : terminates the innermost loop immediately when it's encountered  
`continue` : skips the statements after it inside the loop for the iteration


## example
### `break`
```c
int i = 1;
while (i <= 10) {
    if (i == 5)
        break;
    
    printf("%d\n", i);
    i++;
}
```
Output:
```
1
2
3
4
```

### `continue`
```c
int i = 1;
while (i <= 10) {
    if (i == 5)
        continue;
    
    printf("%d\n", i);
    i++;
}
```
Output:
```
1
2
3
4
6
7
8
9
10
```

