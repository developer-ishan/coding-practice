#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * size of datatype (number of bytes)
 *    typically the output of sizeof operator
 * pointer to 0th byte
 *    in simple terms byte array
*/
void print_binary(size_t size, void* ip_data){
  char *data = (char*) ip_data;
  long long i, j;
  for(i=0; i<size; i++){
    char byte = data[i];
    for (j=7; j>=0; j--){
      char bit = (byte >> j) & 1;
      printf("%hhd", bit);
    }
    printf(" ");
  }
}

int main(int argc, char const *argv[])
{
  int a = 13;
  print_binary(sizeof(int), &a);
  printf("\n");
  return 0;
}
