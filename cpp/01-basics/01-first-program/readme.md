# Fist program

```c++
#include <iostream>

int main()
{
    std::cout << "Hello, World!\n";
}
```

or

```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!\n";
}
```


## Explanation
- Every C++ program must have exactly one global function named `main()`.
    - The program starts by executing `main()`.
    - The int value returned by `main()`, if any, is the program’s return value to "**the system**".
    - If no value or zero (`0`) is returned, the system will receive a value indicating **successful** completion. 
    - A *nonzero* value from `main()` indicates **failure**.
- The line `#include <iostream>` instructs the compiler to include the declarations of the standard stream I/O facilities as found in `iostream`.
- In the line `std::cout << "Hello, World!\n"`, the operator `<<` ("**put to**") writes its second argument onto its first.
- The `std::` specifies that the name `cout` is to be found in the standard library namespace.


