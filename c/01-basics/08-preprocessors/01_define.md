# `#define`

## examples

```c
#include <stdio.h>
#define PI 3.1415
void main()
{
    float r = 6.25;
    float area;
    area = PI * r * r;
    printf("Area of circle = %f\n", area);
}
```

```c
#include <stdio.h>
#define AND &&
#define OR ||
void main()
{
    int f = 1, x = 4, y = 90;
    if ((f < 5) AND(x <= 20 OR y <= 45))
        printf("Your PC will always work fine...\n");
    else
        printf("In front of the maintenance man\n");
}
```

```c
#include <stdio.h>
#define AND &&
#define ARANGE (a > 25 AND a < 50)
void main()
{
    int a = 30;
    if (ARANGE)
        printf("within range\n");
    else
        printf("out of range\n");
}
```

```c
#include <stdio.h>
#define FOUND printf("The Yankee Doodle Virus");
void main()
{
    char signature;
    if (signature == 'Y')
        FOUND
    else
        printf("Safe... as yet !");
}
```

```c
#include <stdio.h>
#define AREA(x) (3.14 * x * x)
void main()
{
    float r1 = 6.25, r2 = 2.5, a;
    a = AREA(r1);
    printf("Area of circle = %f\n", a);
    a = AREA(r2);
    printf("Area of circle = %f\n", a);
}
```

```c
#include <stdio.h>
#define HLINE                \
    for (i = 0; i < 79; i++) \
        printf("%c", '-');
void main()
{
    int i, y;
    HLINE
}
```