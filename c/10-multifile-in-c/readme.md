# Multi-file programming in C

- in bigger projects, one file may become very big to write and manage
- code is then broken into multiple files

## compiling 
```
gcc <file 1>.c <file 2>.c ...
```

example:
```
gcc lib.c lib.h main.c
```

or

```
gcc -o <output file> <file 1>.c <file 2>.c ...
```

example:
```
gcc -o a.exe lib.c lib.h main.c
```


## executing

```
./a.out
```

or

```
./<output file>
```

example:
```
./a.exe
```