# float.h


| Component | Component Description |
| - | - |
| S | sign ( +/- ) |
| b | base or radix of the exponent representation, 2 for binary, 10 for decimal, 16 for hexadecimal, and so on... |
| e | exponent, an integer between a minimum emin and a maximum emax. |
| p | precision, the number of base-b digits in the significand. |

| macro | value | description |
| - | - | - |
| `FLT_ROUNDS` | -1 : indeterminable <br> 0 : towards zero <br> 1 : to nearest <br> 2 : towards positive infinity <br> 3 : towards negative infinity | Defines the rounding mode for floating point addition and it can have any of the following values |
| `FLT_RADIX` | 2 | This defines the base radix representation of the exponent. A base-2 is binary, base-10 is the normal decimal representation, base-16 is Hex. |
| `FLT_MANT_DIG` <br> `DBL_MANT_DIG` <br>  `LDBL_MANT_DIG` | | These macros define the number of digits in the number (in the `FLT_RADIX` base). |
| `FLT_DIG` <br> `DBL_DIG` <br> `LDBL_DIG` | 6 <br> 10 <br> 10 | These macros define the maximum number decimal digits (base-10) that can be represented without change after rounding. |
| `FLT_MIN_EXP` <br> `DBL_MIN_EXP` <br> `LDBL_MIN_EXP` | | These macros define the minimum negative integer value for an exponent in base `FLT_RADIX`. |
| `FLT_MIN_10_EXP` <br> `DBL_MIN_10_EXP` <br> `LDBL_MIN_10_EXP` | -37 <br> -37 <br> -37 | These macros define the minimum negative integer value for an exponent in base 10. |
| `FLT_MAX_EXP` <br> `DBL_MAX_EXP` <br> `LDBL_MAX_EXP` | | These macros define the maximum integer value for an exponent in base `FLT_RADIX`. |
| `FLT_MAX_10_EXP` <br> `DBL_MAX_10_EXP` <br> `LDBL_MAX_10_EXP` | +37 <br> +37 <br> +37 | These macros define the maximum integer value for an exponent in base 10. |
| `FLT_MAX` <br> `DBL_MAX` <br> `LDBL_MAX` | 1E+37 <br> 1E+37 <br> 1E+37 | These macros define the maximum finite floating-point value. |
| `FLT_EPSILON` <br> `DBL_EPSILON` <br> `LDBL_EPSILON` | 1E-5 <br> 1E-9 <br> 1E-9 | These macros define the least significant digit representable. |
| `FLT_MIN` <br> `DBL_MIN` <br> `LDBL_MIN` | 1E-37 <br> 1E-37 <br> 1E-37 | These macros define the minimum floating-point values. |