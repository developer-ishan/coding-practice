#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include<unistd.h>

int main(int argc, char const *argv[])
{
  int id = fork();
  if(id!=0){
    fork();
  }
  printf("Hello Wprld\n");
  return 0;
}

/**
 * print 3 times
*/
