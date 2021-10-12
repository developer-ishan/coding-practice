#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  char buffer[200];
    sprintf(buffer, "test %d", 5);
    printf("%s", buffer);
  return 0;
}
