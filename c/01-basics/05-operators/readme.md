# Operator

These are symbols that are used to perform specific operations.

## Types of operators

| type    | description       |
| -       | -                 |
| unary   | takes one operand |
| binary  | takes 2 operands  |
| ternary | takes 3 operands  |

| type | description | operations |
| - | - | - |
| Arithmetic | performs arithmetic operations | `+`, `-`, `*`, `/`, `%`, `++`, `--` |
| Assignment | performs assignment of values and references | `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `>>=`, `<<=`, `&=`, `^=`, `\|=` |
| Comparison | used for comparing 2 values | `<`, `<=`, `>`, `>=`, `==`, `!=` |
| Logical | used for logical operations | `&&`, `\|\|` ,`!` |
| Bitwise | used for bit-wise operations | `&`, `\|`, `~`, `^`, `>>`, `<<` |
| sizeof | used for getting size of a variable or datatype | `sizeof` |
| Conditional | used for condition | `?:` |

## Precedence and Associativity of operators

| Category          | Operator                                                           | Associativity |
| -                 | -                                                                  | -             |
| Postfix           | `()`, `[]`, `->`, `.`, `++`, `--`                                  | Left to right |
| Unary             | `+`, `-`, `!`, `~`, `++`, `--`, `(type)*`, `&`, `sizeof`           | Right to left |
| Multiplicative    | `*`, `/`, `%`                                                      | Left to right |
| Additive          | `+`, `-`                                                           | Left to right |
| Shift             | `<<`, `>>`                                                         | Left to right |
| Relational        | `<`, `<=`, `>`, `>=`                                               | Left to right |
| Equality          | `==`, `!=`                                                         | Left to right |
| Bitwise AND       | `&`                                                                | Left to right |
| Bitwise XOR       | `^`                                                                | Left to right |
| Bitwise OR        | `\|`                                                               | Left to right |
| Logical AND       | `&&`                                                               | Left to right |
| Logical OR        | `\|\|`                                                             | Left to right |
| Conditional       | `?:`                                                               | Right to left |
| Assignment        | `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `>>=`, `<<=`, `&=`, `^=`, `\|=` | Right to left |
| Comma             | `,`                                                                | Left to right |

