#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void f(){
  char c = getchar();
  printf("Again the same result: %c\n", c);
}
int main(int argc, char const *argv[]){
  char c = getchar();
  printf("Result: %c\n", c);

  //putting the character back to the stdin
  ungetc(c, stdin);

  char c2 = getchar();
  printf("Again the same result: %d\n", c2);

  f();
  return 0;
}
