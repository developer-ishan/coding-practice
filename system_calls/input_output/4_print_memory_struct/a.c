/**
 * I always liked the idea of looking at what is happening behind the scenes with my program. 
 * Sure, you could use a debugger, 
 * but that's just not that fun and it may hide some details.
 * Today we look at how you can print every byte of a variable to the console.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
  int test; //4
  char k; //1
  char str[10]; //10
  int *p; //8 (64 bit compiler)
  short sh; //2
} Thing;

int main(int argc, char const *argv[]){
  int a;
  Thing t = {12, 'k', "testing", &a, 256};
  // unsigned long long t = 10;
  printf("%lu" ,sizeof(t));
  //printing bytes of struct
  unsigned char data;
  
  printf("Bytes:\n");
  for(int i=0; i<sizeof(t); i++){
    if(i%4 == 0)
      printf("\n");
    data = *(((unsigned char*)&t) + i);
    printf("%02x ", data);
  }
  printf("\n");

  printf("Decimal:\n");
  for(int i=0; i<sizeof(t); i++){
    if(i%4 == 0)
      printf("\n");
    data = *(((unsigned char*)&t) + i);
    printf("%03hhu ", data);
  }
  printf("\n");

  printf("Characters:\n");
  for(int i=0; i<sizeof(t); i++){
    if(i%4 == 0)
      printf("\n");
    data = *(((unsigned char*)&t) + i);
    printf("%c ", data);
  }
  printf("\n");
  return 0;
}
