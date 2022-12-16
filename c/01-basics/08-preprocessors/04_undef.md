# `#undef`

On some occasions it may be desirable to cause a defined name to become ‘**undefined**’. This can be accomplished by means of the `#undef` directive.

syntax:
```c
#undef macro_template
```

## Examples
```c
#undef PENTIUM
```

- All subsequent #ifdef PENTIUM statements would evaluate to false.
