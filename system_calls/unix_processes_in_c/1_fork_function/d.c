#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include<unistd.h>

int main(int argc, char const *argv[])
{
  if(argc!=2){
    fprintf(stderr, "Pass number of child processes you want\n");
    fprintf(stderr, "Example usage: <exec> n\n");
    return 1;
  }
  
  int n = atoi(argv[1]);
  for(int i=0; i<n; i++){
    int fstat = fork();
    if(fstat == 0){
      printf("%d --> %d\n", getppid(), getpid());
      printf("\tHello World\n");
      return 0;
    }
  }
  return 0;
}

/**
 * same parent have n child processes
 * print n times
*/
