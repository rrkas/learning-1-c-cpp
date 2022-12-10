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
These are the basic/ core datatypes of C

<table>
<tr><th>datatype</th><th>variations</th><th>format specifier</th></tr>

<tr><td rowspan="2">char</td><td>char</td><td>%c</td></tr>
<tr><td>unsigned char</td><td>%c</td></tr>

<tr><td rowspan="6">int</td><td>int</td><td>%d or %i</td></tr>
<tr><td>unsigned int</td><td>%d or %i or %lu</td></tr>
<tr><td>short</td><td>%d or %i or %hi</td></tr>
<tr><td>unsigned short</td><td>%d or %i or %hi or %hu</td></tr>
<tr><td>long <br> long int</td><td>%d or %i or %l or %ld or %li</td></tr>
<tr><td>unsigned long <br> unsigned long int</td><td>%d or %i or %l or %ld or %li or %lu</td></tr>

<tr><td rowspan="2">float</td><td>float</td><td>%f</td></tr>
<tr><td>float (scientific)</td><td>%e or %E or %g or %G</td></tr>

<tr><td rowspan="3">double</td><td>double</td><td>%f or %lf</td></tr>
<tr><td>double (scientific)</td><td>%e or %E or %g or %G</td></tr>
<tr><td>long double</td><td>%Lf</td></tr>

<table>


