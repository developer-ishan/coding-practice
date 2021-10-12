# getc, getch, getche and getchar in C

## Getting single character from a stream

### Return single char from keyboard

```
The entered char will not be visible on the console i.e. directly returns the key stroke

Why it returns int even if char is only 1 byte?
char is not enough to store EOF

getch is not cstd function
comes from conio.h which in turn comes from ms dos era
```

```c
int c = getch();//no need to press enter
int c = getche();//have to press enter
```

### C std function

```c
int c = getc(stdin);
int c = getchar();
int c = fgetc(stdin);//getc can be a macro
```

The difference between getc and fgetc is that getc can be implemented as a macro, whereas fgetc cannot be implemented as a macro. This means three things:

- The argument to getc should not be an expression with side effects.
- Since fgetc is guaranteed to be a function, we can take its address. This allows us to pass the address of fgetc as an argument to another function.
- Calls to fgetc probably take longer than calls to getc, as it usually takes more time to call a function.
