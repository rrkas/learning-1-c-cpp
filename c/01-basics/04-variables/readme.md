# Variables / Identifier

A variable is a named memory location.

## What does that really mean?
- Memory is divided into bits/ bytes and every bit/ byte has a unique address.
- A variable is used to reference one/ more addresses
- It stores a value in the allocated memory allowed by the declared by the datatype
- It can also change the value in that memory location at any point of time during program execution


### Analogy
- Memory: `locker room`  
    lots of lockers
- byte: `individual locker`  
    each locker has unique ID/ number
- variable: `allocated locker`  
    user has access to a locker and he can keep anything he wants at anytime in it.

## Declaration and Initialization
- **Declaration**: Declaring to compiler about a variable  
    Example: `int a;`
- **Initialization**: Assigning initial value to the variable  
    Example: `a = 10;`
- **Declaration** and **Initialization**: Declaring to compiler about a variable and simultaneously assigning a initial value to the variable  
    Example: `int a = 10;`


## Type casting and type conversion
### Type casting (forced)
- In typing casting, a data type is converted into another data type by the programmer using the casting operator during the program design. 
- In typing casting, the destination data type may be smaller than the source data type when converting the data type to another data type, that's why it is also called narrowing conversion

Syntax: `destination_datatype = (target_datatype)variable;`  
target_datatype: is a data type in which we want to convert the source data type.

### Type conversion (automatic)
- In type conversion, a data type is automatically converted into another data type by a compiler at the compiler time. 
- In type conversion, the destination data type cannot be smaller than the source data type, that's why it is also called widening conversion. 
- One more important thing is that it can only be applied to compatible data types.


## Rules for naming a variable
- Names can contain letters, digits and underscores
- Names must begin with a letter or an underscore ( `_` )
- Names are case sensitive (`myVar` and `myvar` are different variables)
- Names cannot contain whitespaces or special characters like !, #, %, etc.
- Reserved words (such as `int`) cannot be used as names
