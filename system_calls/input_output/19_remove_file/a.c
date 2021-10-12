#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char* argv[]) {
    int res = remove("number3.dat");
    if (res == 0) {
        printf("Removed file successfully\n");
    } else {
        printf("Failed to remove file with error: %s\n", strerror(errno));
    }
  