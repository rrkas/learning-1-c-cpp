# Default Parameters

```c++
int multiply(int a, int b = 7) // b has default value of 7.
{
    return a * b;
}
// If multiply() is called with one parameter, the
// value will be multiplied by the default, 7.
```

- In this example, `multiply()` can be called with one or two parameters. - If only one parameter is given, `b` will have default value of `7`. 
- Default arguments must be placed in the **latter** arguments of the function.

```c++
int multiply(int a, int b = 20);      // This is legal
int multiply(int a = 10, int b = 20); // This is legal
int multiply(int a = 10, int b);      // This is illegal since int a is in the former
```



