Struct in c
```cpp
typedef struct{
  int test; //4
  char k; //1
  char str[10]; //10
  int *p; //8 (64 bit compiler)
  short sh; //2
} Thing;

Thing t = {12, 'k', "testing", &a, 256};
```

Struct in Memory
```
0c 00 00 00 
6b 74 65 73 
74 69 6e 67 
00 00 00 00 
28 8c c7 7e 
fd 7f 00 00 
00 01 71 89 
48 56 00 00
```

Explanation
```
int
0c 00 00 00

char
6b 

10 char string
74 65 73    
74 69 6e 67
00 00 00 

extra byte
00

pointer variable
b8 21 2d 61
ff 7f 00 00

short
00 01(little endian, reverse byte by byte) -> 01 00(256 in hex)

extra memory
c0 cd
36 56 00 00
```

extra memory is given in end by the compiler itself for
fast accessing