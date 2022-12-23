# union

- these are derived datatypes like struct
- used to group a number of different variables together
- union enables to treat the same space in memory as a number of different variables
- union offers a way for a section of memory to be treated as a variable of one type on one occasion, and as a different variable of different type on another occasion


## example

```c
void main() {
    union a{
        int i;
        char ch[2];
    };
    union a key;

    key.i = 512;
    printf("\nkey.i = %d", key.i);
    printf("\nkey.ch[0] = %d", key.ch[0]);
    printf("\nkey.ch[1] = %d", key.ch[1]);
}
```

output:
```
key.i = 512
key.ch[0] = 0
key.ch[1] = 2
```

### explanation:

```
_ _ _ _ _ _ _ _  _ _ _ _ _ _ _ _        bytes
0 0 0 0 0 0 0 0  0 0 0 0 0 0 1 0        values
_______________i________________
_____ch[0]_____  _____ch[1]_____
low byte               high byte        little endian
```


- size of union is size of max element of the union
- size of struct is sum of sizes of all elements of the struct

