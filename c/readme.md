# C

## Chapters
### Basics
1. first program
1. keywords
1. datatypes
1. variables
1. operators
1. `printf`
1. `scanf`
1. preprocessors
1. Console Input/Output functions

### Conditional/ Branch/ Decision control statements
1. `if`
1. `if - else`
1. `if - else if - else`
1. `if - else if - else if - ... - else` (if-else ladder)
1. nested `if` statement
1. `switch` statement
1. ternary/ conditional operator (`?:`)

### Loops
1. `while` loop
1. `break` and `continue` statements
1. `for` loop
1. `do`-`while` loop
1. nested loop

### Functions
1. Passing Values between Functions
1. Scope Rule of Functions
1. Call by Value and Call by Reference
1. Recursion
1. Varying arguments

### Pointers
1. intro
1. pointer arithmetic

### Array
1. Intro to Arrays
1. Passing Array Elements to a Function
1. Pointers and Arrays
1. Two Dimensional Arrays
1. Array of Pointers

### Strings
1. intro
1. print string
1. input string
1. Pointers and Strings
1. Standard Library
1. `const` strings
1. 2D array of strings
1. Array of Pointers to Strings

### Structures (`struct`)
1. intro
1. array of structures
1. Nested structures
1. Passing structure to function
1. Pointer to structure
1. Holes in memory allocation & solution




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

## Execution of c program
`c source code (.c)` --( **Preprocessor** )--> `expanded source code (.i)` --( **Compiler** )--> `object code (.obj)` --( **Linker** )--> `executable code (.exe)`