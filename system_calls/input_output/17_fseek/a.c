#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    FILE* out;
    out = fopen("number.dat", "w");
    if (out == NULL) {
        return 1;
    }
    
    fprintf(out, "20");
    fseek(out, -2, SEEK_END);
    fprintf(out, "19");
    
    return 0;
}