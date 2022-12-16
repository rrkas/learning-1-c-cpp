# Array

- Intro to Arrays
- Passing Array Elements to a Function
- Pointers and Arrays
- Two Dimensional Arrays
- Array of Pointers

An array is a collective name given to a group of ‘**similar quantities’**.

Why?  
suppose we wish to arrange the percentage marks obtained by 100 students in ascending order.  
In such a case we have two options to store these marks in memory:  
1. Construct 100 variables to store percentage marks obtained by 100 different students, i.e. each variable containing one student’s marks.
1. Construct one variable (called array or subscripted variable) capable of storing or holding all the hundred values.

The second alternative is better. A simple reason for this is, it would be much easier to handle one variable than handling 100 different variables.

An array is also known as a subscripted variable.

However big an array its elements are always stored in **contiguous** memory locations.

## Array Operations (1-D)
**Declaring**:
```c
datatype array_name[size];
```

example:
```c
int marks[30];
```

- This **size** is often called the ‘**dimension**’ of the array.
- The bracket (`[]`) tells the compiler that we are dealing with an array.
- Till the array elements are not given any specific values, they are supposed to contain **garbage values**.



**Array Initialisation:**

example:
```c
int num[6] = { 2, 4, 12, 5, 45, 5 } ;
int n[ ] = { 2, 4, 12, 5, 45, 5 } ;
float press[ ] = { 12.3, 34.2 -23.4, -11.3 } ;
```

- If the array is initialised where it is declared, mentioning the dimension of the array is optional

**Accessing Elements of an Array:**
```c
array_name[position]
```

example:
```c
marks[2]
```

- All the array elements are numbered, starting with `0`.


**Entering Data into an Array:**

example:
```c
for (i = 0; i < 30; i++)
{
    printf("\nEnter marks ");
    scanf("%d", &marks[i]);
}
```

**Reading Data from an Array:**

example:
```c
for ( i = 0 ; i <= 29 ; i++ )
    sum = sum + marks[i] ;

avg = sum / 30 ;
printf ( "\nAverage marks = %d", avg ) ;
```

**Memory map:**

example:
```c
int num[6] = { 2, 4, 12, 5, 45, 5 } ;
```

| index | `num[0]` | `num[1]` | `num[2]` | `num[3]` | `num[4]` | `num[5]` |
| - | - | - | - | - | - | - |
| value | 2 | 4 | 12 | 5 | 45 | 5 |
| address | 65508 | 65510 | 65512 | 65514 | 65516 | 65518 |

