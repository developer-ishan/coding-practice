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

  FILE* in;
  FILE* out;

  /**
   * Writing
  */
  out = fopen("./point.data", "w");
  if(out == NULL)
    return 1;
  
  int bytes_wrote = fprintf(out, "%d, %d\n", p1.x, p1.y);
  fclose(out);
  if(bytes_wrote <= 0)
    return 2;

  /**
   * Reading
  */
  in = fopen("./point.data", "r");
  if(in==NULL){
    fprintf(stderr,"Cannot file for reading\n");
    return 3;
  }


  int elements_read = fscanf(in, "%d, %d", &p2.x, &p2.y);
  if(elements_read < 2)
    return 4;
  fclose(in);

  printf("Read from file the point: %d %d\n", p2.x, p2.y);
  return 0;
}
