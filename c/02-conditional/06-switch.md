# `switch`

## syntax

```c
switch(expression){    
    case value1:    
        statements;
        break;
    case value2:    
        statements;
        break;
    
    ...

    default:     
        statements;
}    
```

## Example
```c
int number=0; 
printf("enter a number:");
scanf("%d", &number);
switch(number){    
    case 10:    
        printf("number is equals to 10");
        break;
    case 50:    
        printf("number is equal to 50");
        break;
    case 100:    
        printf("number is equal to 100");
        break;
    default:    
        printf("number is not equal to 10, 50 or 100");
}    
```


## Note
- `default` clause is optional  
    Its executed when none of the case values match the expression
- `break;` statement is optional  
    without `break;`, all the case below will be executed and until it sees break.
- not using break generally considered as a bad practice but some time it may also come handy because of its "**fall-through**" nature

