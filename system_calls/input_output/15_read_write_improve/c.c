/**
 * Resolving problem of b.c
 * exit code 4
 * 
 * Bring cursor again to the begining for reading
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
  int x, y;
} Point;

int main(int argc, char const *argv[]){
  Point p1 = {
    .x = 12,
    .y = 10
  };
  Point p2;

  FILE* io;

  /**
   * Opening file
  */
  io = fopen("./point.data", "w+");
  if(io == NULL)
    return 1;

  /**
   * Writing
  */
  int bytes_wrote = fprintf(io, "%d, %d\n", p1.x, p1.y);
  if(bytes_wrote <= 0){
    fclose(io);
    return 2;
  }

  /**
   * Reading
  */
 fseek(io, 0, SEEK_SET);
  int elements_read = fscanf(io, "%d, %d", &p2.x, &p2.y);
  if(elements_read < 2){
    fclose(io);
    return 4;
  }

  /**
   * Closing file
  */
  fclose(io);

  printf("Read from file the point: %d %d\n", p2.x, p2.y);

  return 0;
}
