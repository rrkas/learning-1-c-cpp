# Datatype

It defines the values that can be used in the language and the operations that can be performed on it.

## Datatypes in C

1. Basic
    1. int
    1. char
    1. float
    1. double
1. Derived
    1. array
    1. pointer
    1. structure
    1. union
1. Enumeration
    1. enum
1. Void
    1. void

## Data Type Modifiers
| Modifier | Description | Applicable to datatypes |
| - | - | - |
| short<br>(default) | It limits user to store small integer values (`-32768` to `32767`) | `char`, `int` |
| long | Used to store a large number | `int`, `double` |
| signed<br>(default) | capable of storing both positive and negative values | `char`, `int`, `double` |
| unsigned | capable of storing only positive values | `char`, `int`, `double` |


## Basic Datatype
These are the basic/ core datatypes of C:

<table>
<tr><th>datatype</th><th>acceptable values</th><th>variations</th><th>format specifier</th></tr>

<tr><td rowspan="2">char</td><td rowspan="2">ASCII character</td><td>char</td><td>%c</td></tr>
<tr><td>unsigned char</td><td>%c</td></tr>

<tr><td rowspan="8">int</td><td rowspan="8">positive and negative<br> whole numbers<br> (without decimal)</td><td>int</td><td>%d or %i</td></tr>
<tr><td>unsigned int</td><td>%u</td></tr>
<tr><td>short</td><td>%hi</td></tr>
<tr><td>unsigned short</td><td>%hu</td></tr>
<tr><td>long <br> long int</td><td>%ld or %li</td></tr>
<tr><td>unsigned long <br> unsigned long int</td><td>%lu</td></tr>
<tr><td>long long <br> long long int</td><td>%lld or %lli</td></tr>
<tr><td>unsigned long long <br> unsigned long long int</td><td>%llu</td></tr>


<tr><td rowspan="2">float</td><td rowspan="2">real number values<br> or<br> decimal points</td><td>float</td><td>%f</td></tr>
<tr><td>float (scientific)</td><td>%e or %E or %g or %G</td></tr>

<tr><td rowspan="3">double</td><td rowspan="3">range exceeds the<br> numeric values that<br> do not come under<br> either float or int</td><td>double</td><td>%lf</td></tr>
<tr><td>double (scientific)</td><td>%e or %E or %g or %G</td></tr>
<tr><td>long double</td><td>%Lf</td></tr>

<table>


## Storage classes
- To fully define a variable one needs to mention not only its ‘**type**’ but also its ‘**storage class**'. Not only do all variables have a data type, they also have a ‘**storage class**’.
- If we don’t specify the storage class of a variable in its declaration, the compiler will assume a storage class depending on the **context** in which the variable is used. Thus, variables have certain default storage classes.

a variable’s storage class tells us:
- **Where** the variable would be stored.
- What will be the **initial value** of the variable, if initial value is not specifically assigned.(i.e. the default initial value).
- What is the **scope** of the variable; i.e. in which functions the value of the variable would be available.
-  What is the **life** of the variable; i.e. how long would the variable exist.

There are four storage classes in C:
| storage class | Storage | Default initial value | Scope | Life |
| - | - | - | - | - |
| Automatic (`auto`) | Memory | garbage value | block | block |
| Register (`register`) | CPU registers | Garbage value | block | block |
| Static (`static`) | Memory | zero (`0`) | block | program <br> <br> Value of the variable persists between different function calls.  |
| External (`extern`) | Memory | zero (`0`) | global | program |

We can make a few ground rules for usage of different storage classes in different programming situations with a view to:
1.  economise the memory space consumed by the variables
1.  improve the speed of execution of the program

The rules are as under:
- Use `static` storage class only if you want the value of a variable to persist between different function calls.

- Use `register` storage class for only those variables that are being used very often in a program.  
Reason is, there are very few CPU registers at our disposal and many of them might be busy doing something else.  
Make careful utilization of the scarce resources.   
A typical application of register storage class is loop counters, which get used a number of times in a program.

- Use `extern` storage class for only those variables that are being used by almost all the functions in the program.  
This would avoid unnecessary passing of these variables as arguments when making a function call.  
Declaring all the variables as extern would amount to a lot of wastage of memory space because these variables would remain active throughout the life of the program.

- If you don’t have any of the express needs mentioned above, then use the `auto` storage class.  
In fact most of the times we end up using the auto variables, because often it so happens that once we have used the variables in a function we don’t mind losing them.

