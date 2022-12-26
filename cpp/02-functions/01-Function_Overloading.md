# Function Overloading

```c++
int add2(int i)
{
    int j = i + 2;
    return j;
}
// Code contained in this definition will be evaluated
// when add2() is called with one parameter.

int add2(int i, int j)
{
    int k = i + j + 2 ;
    return k;
}
// However, when add2() is called with two parameters, the
// code from the initial declaration will be overloaded,
// and the code in this declaration will be evaluated
// instead.
```

- Both functions are called by the same name `add2`, but the actual function that is called depends directly on the amount and type of the parameters in the call. 
- In most cases, the C++ compiler can compute which function to call.
- In some cases, the type must be explicitly stated.


