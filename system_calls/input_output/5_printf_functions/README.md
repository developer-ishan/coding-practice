# Simple technique to understanding all 32 printf functions

## Trick

Following makes 8 combinations

- s : buffer
- n : buffer with size
- f : stream (file)
- \_s : safer version (C11)

Others(8+8)

- w : wide char
- v : var args list

Last (8)
- vfwprintf_s

1.  Simple printf

    ```c
    printf("test %d", 5);
    ```

2.  instead of sending to stdout save it inside array of char

    s for buffer

    ```c
    char buffer[200];
    sprintf(buffer, "test %d", 5);
    printf("%s", buffer);
    ```

3.  If format string is larger than n skip them

    ```c
    char buffer[200];
    snprintf(buffer, 200,"test %d", 5);
    printf("%s", buffer);
    ```

    Safer to print using snprintf
    sprintf may also access memory it should not have access to

4.  Printing to file

    ```c
    fprintf(stderr, "error");
    ```

5.  Safer version of printf

    underscore functions are defined as per c11 standard

    ```c
    fprintf_s(stderr, "error");
    ```

6.  Wide Char

    ```c
    fwprintf_s(stderr, "error");
    ```

7.  Pass as vlist(variable arguments)

```c
va_list args;
vfprintf_s(stderr, "test %s", args);
```
