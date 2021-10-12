#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Point {
    int x;
    int y;
    int val;
} Point;

int main(int argc, char* argv[]) {
    FILE* file = fopen("input.txt", "r");
    if (file == NULL) {
        return 1;
    }

    char buffer[200];
    
    Point points[100];
    int i = 0;
    while(!feof(file)) {
        fgets(buffer, 200, file);
        Point* p = points + i;
        sscanf(buffer, "%d %d %d", &p->x, &p->y, &p->val);
        i++;
    }
    
    int n = i;
    for (i = 0; i < n; i++) {
        printf("Read point: %d %d %d\n", points[i].x, points[i].y, points[i].val);
    }
    fclose(file);

    return 0;
}