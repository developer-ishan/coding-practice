#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  putchar('e');//std c function
  putc('e', stdout);

  //return value is used to check if an error occured while writing to a file

  //putch is not as std c function work on windows
  return 0;
}
