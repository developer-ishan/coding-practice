#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define POINT_FORMAT "(%lf; %lf)"

typedef struct Point {
    double x, y;
} Point;

void process(Point q) {
    q.x += 5;
    Point u = {
        .x = 19.5,
        .y = 0.25
    };
    printf("My point q: "POINT_FORMAT" and my point u "POINT_FORMAT"\n", q.x, q.y, u.x, u.y);
}

int main(int argc, char* argv[]) {
    Point p = {
        .x = 10,
        .y = 25
    };
    char buf[256]; 
    process(p);
    snprintf(buf, 256, POINT_FORMAT"\n", p.x, p.y);
    printf("%s", buf);
    return 0;
}