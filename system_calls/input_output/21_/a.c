#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    // Only for MSVC compiler
    // _set_printf_count_output(1);
    
    int num, x;
    scanf("%d%n", &x, &num);
    printf("Number of characters read: %d\n", num);
    return 0;
}