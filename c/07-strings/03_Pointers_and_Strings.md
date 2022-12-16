# Pointers and Strings

```c
char str[ ] = "Hello" ;
char *p = "Hello" ;
```

- We may either store it in a string or we may ask the C compiler to store it at some location in memory and assign the address of the string in a char pointer.
- we cannot assign a string to another, whereas, we can assign a char pointer to another char pointer.

```c
main( )
{
    char str1[ ] = "Hello" ;
    char str2[10] ;
    char *s = "Good Morning" ;
    char *q ;
    str2 = str1 ; /* error */
    q = s ; /* works */
}
```

- once a string has been defined it cannot be initialized to another set of characters.

```c
main( )
{
    char str1[ ] = "Hello" ;
    char *p = "Hello" ;
    str1 = "Bye" ; /* error */
    p = "Bye" ; /* works */
}
```


