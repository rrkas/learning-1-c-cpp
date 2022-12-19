# Array of Structures

example:
```c
/* Usage of an array of structures */
#include <stdio.h>

/* Usage of an array of structures */
void main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b[100];
    int i, n = 100;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter name, price and pages ");
        scanf(" %c %f %d", &b[i].name, &b[i].price, &b[i].pages);
        /* space before '%c' in scanf() will consider the previously entered ENTER key press. */
    }
    for (i = 0; i < n; i++)
        printf("\n%c %f %d", b[i].name, b[i].price, b[i].pages);
}

```
