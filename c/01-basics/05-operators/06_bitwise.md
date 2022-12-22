# Bitwise Operators

| Operator | Meaning |
| - | - |
| `~` | One’s complement |
| `>>` | Right shift |
| `<<` | Left shift |
| `&` | Bitwise AND |
| `\|` | Bitwise OR |
| `^` | Bitwise XOR (Exclusive OR) |

- These operators can operate upon `int`s and `char`s but not on `float`s and `double`s.

```c
/* Print binary equivalent of integers using showbits( ) function */
main( )
{
    int j ;
    for ( j = 0 ; j <<= 5 ; j++ )
    {
        printf ( "\nDecimal %d is same as binary ", j ) ;
        showbits ( j ) ;
    }
}
```

output:
```
Decimal 0 is same as binary 0000000000000000
Decimal 1 is same as binary 0000000000000001
Decimal 2 is same as binary 0000000000000010
Decimal 3 is same as binary 0000000000000011
Decimal 4 is same as binary 0000000000000100
Decimal 5 is same as binary 0000000000000101
```

```c
showbits ( int n )
{
    int i, k, andmask ;
    for ( i = 15 ; i >= 0 ; i-- )
    {
        andmask = 1 << i ;
        k = n & andmask ;
        k == 0 ? printf ( "0" ) : printf ( "1" ) ;
    }
}
```

## One’s Complement Operator

- On taking one’s complement of a number, all `1`’s present in the number are changed to `0`’s and all `0`’s are changed to `1`’s.
- one’s complement of `1010` is `0101`
```c
main( )
{
    int j, k ;
    for ( j = 0 ; j <= 3 ; j++ )
    {
        printf ( "\nDecimal %d is same as binary ", j ) ;
        showbits ( j ) ;
        k = ~j ;
        printf ( "\nOne’s complement of %d is ", j ) ;
        showbits ( k ) ;
    }
}
```

output:
```
Decimal 0 is same as binary 0000000000000000
One’s complement of 0 is 1111111111111111
Decimal 1 is same as binary 0000000000000001
One’s complement of 1 is 1111111111111110
Decimal 2 is same as binary 0000000000000010
One’s complement of 2 is 1111111111111101
Decimal 3 is same as binary 0000000000000011
One’s complement of 3 is 1111111111111100
```


## Right Shift Operator

- The number of places the bits are shifted depends on the number following the operator (i.e. its right operand).

```c
main( )
{
    int i = 5225, j, k ;
    printf ( "\nDecimal %d is same as binary ", i ) ;
    showbits ( i ) ;
    for ( j = 0 ; j <= 5 ; j++ )
    {
        k = i >>j ;
        printf ( "\n%d right shift %d gives ", i, j ) ;
        showbits ( k ) ;
    }
}
```

output:
```
Decimal 5225 is same as binary 0001010001101001
5225 right shift 0 gives 0001010001101001
5225 right shift 1 gives 0000101000110100
5225 right shift 2 gives 0000010100011010
5225 right shift 3 gives 0000001010001101
5225 right shift 4 gives 0000000101000110
5225 right shift 5 gives 0000000010100011
```

- In the expression a >> b, 
    - If `a` is negative than its left most bit (sign bit) would be `1`.
        - if `a` contains `-1`, its binary representation would be `1111111111111111`.
        - Without sign extension, the operation `a >> 4` would be `0000111111111111`.
        - However, on the machine on which we executed this expression the result turns out to be `1111111111111111`.
        - Thus the sign bit `1` continues to get extended.
    - if `b` is negative the result is unpredictable.

## Left Shift Operator
- the bits are shifted to the left, and for each bit shifted, a `0` is added to the right of the number.

```c
main( )
{
    int i = 5225, j, k ;
    printf ( "\nDecimal %d is same as ", i ) ;
    showbits ( i ) ;
    for ( j = 0 ; j <= 4 ; j++ )
    {
        k = i <<j ;
        printf ( "\n%d left shift %d gives ", i, j ) ;
        showbits ( k ) ;
    }
}
```

output:
```
Decimal 5225 is same as binary 0001010001101001
5225 left shift 0 gives 0001010001101001
5225 left shift 1 gives 0010100011010010
5225 left shift 2 gives 0101000110100100
5225 left shift 3 gives 1010001101001000
5225 left shift 4 gives 0100011010010000
```

## Bitwise AND Operator
- While operating upon these two operands they are compared on a **bit-by-bit basis**.
- Hence both the operands must be of the same type (either char or int).
- The second operand is often called an **AND mask**.
- The `&` operator operates on a pair of bits to yield a resultant bit.


Truth table:
| First bit | Second bit | First bit & Second bit |
| - | - | - |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

OR

| & | 0 | 1 |
| - | - | - |
| 0 | 0 | 0 |
| 1 | 0 | 1 |

Example:
```
10101101            Original bit pattern
00001000            AND mask
--------
00001000            Resulting bit pattern
```

```c
/* To test whether a bit in a number is ON or OFF */
main( )
{
    int i = 65, j ;
    printf ( "\nvalue of i = %d", i ) ;
    
    j = i & 32 ;
    
    if ( j == 0 )
        printf ( "\nand its fifth bit is off" ) ;
    else
        printf ( "\nand its fifth bit is on" ) ;
    
    j = i & 64 ;
    
    if ( j == 0 )
        printf ( "\nwhereas its sixth bit is off" ) ;
    else
        printf ( "\nwhereas its sixth bit is on" ) ;
}
```

output:
```
Value of i = 65
and its fifth bit is off
whereas its sixth bit is on
```


## Bitwise OR Operator

| \| | 0 | 1 |
| - | - | - |
| 0 | 0 | 1 |
| 1 | 1 | 1 |

Example:
```
11010000        Original bit pattern
00000111        OR mask
--------
11010111        Resulting bit pattern
```

## Bitwise XOR Operator

- The OR operator returns 1, when any one of the two bits or both the bits are 1, whereas XOR returns 1 only if one of the two bits is 1.

| ^ | 0 | 1 |
| - | - | - |
| 0 | 0 | 1 |
| 1 | 1 | 0 |

- XOR operator is used to toggle a bit ON or OFF.

```c
main( )
{
    int b = 50 ;
    
    b = b ^ 12 ;
    printf ( "\n%d", b ) ; /* this will print 62 */
    
    b = b ^ 12 ;
    printf ( "\n%d", b ) ; /* this will print 50 */
}
```


