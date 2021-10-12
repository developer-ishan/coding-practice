#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

  char str[10];
  int v=0;
  gets(str);
  printf("You typed: %s\n", str);
  printf("v: %d | %x\n", v, v);
  return 0;
}
