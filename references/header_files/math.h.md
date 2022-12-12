# math.h

| Macro | Description |
| - | - |
| `HUGE_VAL` | This macro is used when the result of a function may not be representable as a floating point number.<br> If magnitude of the correct result is too large to be represented, the function sets errno to ERANGE to indicate a range error, and returns a particular, very large value named by the macro `HUGE_VAL` or its negation (`-HUGE_VAL`). <br> If the magnitude of the result is too small, a value of zero is returned instead.<br> In this case, errno might or might not be set to ERANGE. |

| Function | Description |
| - | - |
| `double acos(double x)` | Returns the arc cosine of `x` in radians. | 
| `double asin(double x)` | Returns the arc sine of `x` in radians. | 
| `double atan(double x)` | Returns the arc tangent of `x` in radians. | 
| `double atan2(double y, double x)` | Returns the arc tangent in radians of `y/x` based on the signs of both values to determine the correct quadrant. | 
| `double cos(double x)` | Returns the cosine of a radian angle `x`. | 
| `double cosh(double x)` | Returns the hyperbolic cosine of `x`. | 
| `double sin(double x)` | Returns the sine of a radian angle `x`. | 
| `double sinh(double x)` | Returns the hyperbolic sine of `x`. | 
| `double tanh(double x)` | Returns the hyperbolic tangent of `x`. | 
| `double exp(double x)` | Returns the value of e raised to the `x`th power. | 
| `double frexp(double x, int *exponent)` | The returned value is the mantissa and the integer pointed to by `exponent` is the exponent.<br> The resultant value is `x = mantissa * 2 ^ exponent`. | 
| `double ldexp(double x, int exponent)` | Returns `x` multiplied by 2 raised to the power of `exponent`. | 
| `double log(double x)` | Returns the natural logarithm (base-e logarithm) of `x`. | 
| `double log10(double x)` | Returns the common logarithm (base-10 logarithm) of `x`. | 
| `double modf(double x, double *integer)` | The returned value is the fraction component (part after the decimal), and sets `integer` to the integer component. | 
| `double pow(double x, double y)` | Returns `x` raised to the power of `y`. | 
| `double sqrt(double x)` | Returns the square root of `x`. | 
| `double ceil(double x)` | Returns the smallest integer value greater than or equal to `x`. | 
| `double fabs(double x)` | Returns the absolute value of `x`. | 
| `double floor(double x)` | Returns the largest integer value less than or equal to `x`. | 
| `double fmod(double x, double y)` | Returns the remainder of `x` divided by `y`. | 
