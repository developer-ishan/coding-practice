#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <conio.h> //not availabe on linux(only on msdos)
int main(int argc, char const *argv[])
{
  int c;
  c = getchar();
  printf("entered char: %c\n", c);
  return 0;
}
//conio