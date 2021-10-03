#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include<unistd.h>

int main(int argc, char const *argv[])
{
  fork();
  fork();
  fork();
  fork();

  printf("Hello Wprld\n");
  return 0;
}

/**
 * prints 2^n times
 * here 16 times
*/
