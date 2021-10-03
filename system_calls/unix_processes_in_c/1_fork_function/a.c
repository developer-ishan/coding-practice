#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
  int id = fork();
  printf("Hello World from id: %d\n", id);
  if(id==0)
    printf("Hello from child process\n");
  else
    printf("Hello from main process\n");
  /**
   * id @child = 0
   * id @parent > 0
   * -1 unable to create child
  */
  return 0;
}
