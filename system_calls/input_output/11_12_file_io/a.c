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

  char buffer_in[256], buffer_out[256];

  /**
   * Writing
  */
  out = fopen("./point.data", "w");
  if(out == NULL)
    return 1;
  
  snprintf(buffer_out, 256,"%d, %d\n", p1.x, p1.y);
  size_t bytes_wrote =  fwrite(buffer_out, sizeof(char), strlen(buffer_out), out);
  fclose(out);
  if(bytes_wrote != strlen(buffer_out))
    return 1;

  /**
   * Reading
  */
  in = fopen("./point.data", "r");
  if(in==NULL){
    fprintf(stderr,"Cannot file for reading\n");
    return 1;
  }
  
  if(fgets(buffer_in, 256, in) == NULL){
    fclose(in);
    return 1;
  }
  fclose(in);
  sscanf(buffer_in, "%d, %d", &p2.x, &p2.y);
  printf("Read from file the point: %d %d\n", p2.x, p2.y);
  return 0;
}
