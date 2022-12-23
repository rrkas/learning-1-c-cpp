# variable args

## examples

```c
#include <stdarg.h>
#include <stdio.h>

double average(int num, ...) {

  va_list valist;
  double sum = 0.0;
  int i;

  /* initialize valist for num number of arguments */
  va_start(valist, num);

  /* access all the arguments assigned to valist */
  for (i = 0; i < num; i++) {
    sum += va_arg(valist, int);
  }

  /* clean memory reserved for valist */
  va_end(valist);

  return sum / num;
}

int main() {
  // first argument will be number of variable args
  printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
  printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
}
```

```c
#include <stdarg.h>
#include <stdio.h>

double display(int type, int num, ...) {
    int i, j;
    char c;
    float f;
    va_list *ptr;

    va_start(ptr, num);
    switch(type) {
        case 1:
            for (j = 1; j <= num; j++) {
                i = va_arg(ptr, int);
                printf("%d", i);
            }
            break;
        
        case 2:
            for (j = 1; j <= num; j++) {
                c = va_arg(ptr, char);
                printf("%c", c);
            }
            break;
        
        case 3:
            for (j = 1; j <= num; j++) {
                f = (float) va_arg(ptr, float);
                printf("%f", f);
            }
            break;
    }
}

int main() {
    display(1, 2, 5, 6);
    display(2, 4, 'A', 'a', 'b', 'c');
    display(3, 3, 2.5, 299.3, -1.0);
}
```

