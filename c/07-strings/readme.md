# Strings
1. intro
1. print string
1. input string
1. Pointers and Strings
1. Standard Library
1. `const` strings
1. 2D array of strings
1. Array of Pointers to Strings

- group of characters can be stored in a character array
- Character arrays are many a time also called strings.
- Many languages internally treat strings as character arrays
- Character arrays or strings are used by programming languages to manipulate text such as words and sentences.
- A string `constant` is a `one-dimensional array` of `characters` terminated by a null (‘`\0`’)

```c
char name[ ] = { 'H', 'A', 'E', 'S', 'L', 'E', 'R', '\0' } ;
```

- Each character in the array occupies `one byte` of memory and the last character is always ‘`\0`’
- ASCII value of ‘`\0`’ is `0`, whereas ASCII value of ‘`0`’ is `48`.
- The terminating null (‘\0’) is important, because it is the only way the functions that work with a string can know where the string ends.  
- A string not terminated by a ‘`\0`’ is not really a string, but merely a collection of characters.


Alternate syntax:
```c
char name[ ] = "HAESLER" ;
```

- in this declaration ‘`\0`’ is not necessary. 
- C inserts the `null` character automatically.

## Access character
```c
all the
following notations refer to the same element:
name[i]
*( name + i )
*( i + name )
i[name]
```