#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
  int x, y;
} Point;

int main(int argc, char const *argv[]){
  Point p1 = {
    .x = 12,
    .y = -9
  };
  Point p2;

  FILE* in;
  FILE* out;

  /**
   * writing to binary file
  */
  // out = fopen("./point.bin", "wb");
  // if(out==NULL)
  //   return 1;

  // size_t elements_returned = fwrite(&p1, sizeof(Point), 1, out);
  // if(elements_returned == 0)
  //   return 2;
  // fclose(out);


  /**
   * Reading from binary file
  */
  in = fopen("./point.bin", "rb");
  if(in == NULL)
    return 3;
  
  size_t read_elements = fread(&p2, sizeof(Point), 1, in);
  fclose(in);
  if(read_elements == 0)
    return 4;

  printf("Read from file the point: %d %d\n", p2.x, p2.y);


  return 0;
}
