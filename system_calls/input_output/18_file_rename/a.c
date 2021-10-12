#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char* argv[]) {
    int res = rename("number2.dat", "number3.dat");
    if (res == 0) {
        printf("File renamed successfuly\n");
    } else {
        char* err = strerror(errno);
        printf("Failed to rename file with error: %s\n", err);
    }
    return 0;
}