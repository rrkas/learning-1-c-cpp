# C

## Chapters
### Basics
1. first program
1. keywords
1. datatypes
1. variables
1. operators
1. printf
1. scanf


## Running code:
### simple

1. Compiling  
```$ gcc <filename>.c -lm```

2. Executing  
Linux:  
```$ ./a.out```  
Windows:  
```> a.out```

- Combined command:  
Linux:  
```$ gcc <filename>.c -lm && ./a.out```  
Windows:  
```> gcc <filename>.c -lm && a.out```



### set output file name
1. Compiling  
```$ gcc <filename>.c -o <output file name> -lm```

2. Executing  
Linux:  
```$ ./<output file name>```  
Windows:  
```> <output file name>```

- Combined command:  
Linux:  
```$ gcc <filename>.c -o <output file name> -lm && ./<output file name>```  
Windows:  
```> gcc <filename>.c -o <output file name> -lm && <output file name>```

Note: 
- `-lm` is optional
- If `undefined reference to '...'` error occurs even after including header file, use `-lm` flag in command

