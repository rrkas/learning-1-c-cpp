# `nullptr`

```c++
Widget* p = new Widget();
delete p;
p = nullptr; // set the pointer to null after deletion
```

- A keyword denoting a null pointer constant. 
- It can be converted to any pointer or pointer-to-member type, yielding a null pointer of the resulting type.
- `nullptr` is not itself a pointer. 
- The type of `nullptr` is a fundamental type known as `std::nullptr_t`.

```c++
void f(int* p);

template <class T>
void g(T* p);

void h(std::nullptr_t p);

int main() {
    f(nullptr); // ok
    g(nullptr); // error
    h(nullptr); // ok
}
```

