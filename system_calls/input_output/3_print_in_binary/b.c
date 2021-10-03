#include<stdio.h>
int main(int argc, char const *argv[])
{
  int a = 13;
  // printf("Decimal: %d\n", a);
  // printf("Hexadecimal: %08x\n", a); //32 bit int can have atmost 8 hexadecimal digits 
  // printf("Octal: %011o\n", a);  //32 bit int can have atmost 11 octal digits

  long long i, j;
  for(i=0; i<sizeof(int); i++){
    char byte = *(((char*)&a) + i); //*(pointer to ith byte)
    //((char*)&a)[i]
    for (j=7; j>=0; j--){//8 bits of a byte
      char bit = (byte >> j) & 1;
      printf("%hhd", bit);
    }
    printf(" ");
  }
  printf("\n");
  return 0;
}

/**
 * 00001101 00000000 00000000 00000000
 * least significant byte is in the beginning
 * for the little endian machine
*/