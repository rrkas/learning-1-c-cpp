# Conditional Compilation

## syntax
```c
#ifdef macroname
statement 1;
statement 2;
statement 3;
#endif
```

## example
```c
main( )
{
    #ifdef OKAY
        statement 1 ;
        statement 2 ; /* detects virus */
        statement 3 ;
        statement 4 ; /* specific to stone virus */
    #endif

    statement 5 ;
    statement 6 ;
    statement 7 ;
}
```

```c
main( )
{
    #ifdef INTEL
        code suitable for a Intel PC
    #else
        code suitable for a Motorola PC
    #endif
    code common to both the computers
}
```

```c
main( )
{
    #ifndef INTEL
        code suitable for a Intel PC
    #else
        code suitable for a Motorola PC
    #endif
    code common to both the computers
}
```

```c
/* myfile.h */
#ifndef __myfile_h
    #define __myfile_h
    
    myfunc()
    {
        /* some code */
    }
#endif
```

```c
main( )
{
    #if TEST <= 5
        statement 1;
        statement 2;
        statement 3;
    #else
        statement 4;
        statement 5;
        statement 6;
    #endif
}
```


```c
#if ADAPTER == VGA
    code for video graphics array
#else
    #if ADAPTER == SVGA
        code for super video graphics array
    #else
        code for extended graphics adapter
    #endif
#endif
```

```c
#if ADAPTER == VGA
    code for video graphics array
#elif ADAPTER == SVGA
    code for super video graphics array
#else
    code for extended graphics adapter
#endif
```