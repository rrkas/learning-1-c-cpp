# Functions
1. Passing Values between Functions
1. Scope Rule of Functions
1. Call by Value and Call by Reference
1. Recursion
1. Varying arguments


A function is a self-contained block of statements that perform a coherent task of some kind.

## syntax
### function definition
```c
return_type function_name(parameter list) {
   body of the function
}
```
### function declaration/ function signature/ function prototype
```c
return_type function_name(parameter list);
```
- Parameter names are not important in function declaration only their type is required

### Parts of function
- **Return Type** − A function may return a value. The `return_type` is the data type of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the `return_type` is the keyword void.
- **Function Name** − This is the actual name of the function. The function name and the parameter list together constitute the function signature.
- **Parameters** − A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument. The parameter list refers to the type, order, and number of the parameters of a function. Parameters are optional; that is, a function may contain no parameters.
- **Function Body** − The function body contains a collection of statements that define what the function does.


## Example
```c
void message()
{
    printf("Smile, and the world smiles with you...\n");
}
void main()
{
    message();
    printf("Cry, and you stop the monotony!\n");
}
```

prototype: 
```c
void message();
```

- `main()` itself is a function and through it we are calling the function `message()`
- when `message()` is called inside `main()`, the control passes to the function `message()`. The activity of `main()` is temporarily suspended; it falls asleep while the `message()` function wakes up and goes to work. 
- When the `message()` function runs out of statements to execute, the control returns to `main()`, which comes to life again and begins executing its code at the exact point where it left off.
- `main()` becomes the '`calling`' function  
    `message()` becomes the '`called`' function.
- Calling convention:
    - Arguments are **passed** from *right to left*. (in calling function)
    - Arguments are **collected** from *left to right*. (in called function)

## Note
- a function **cannot** be defined in another function
- A function can call itself. Such a process is called '**recursion**'.
- A function can return only one value at a time
