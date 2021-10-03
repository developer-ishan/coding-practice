#include<stdio.h>
int main(int argc, char const *argv[])
{
  char text[100];

  printf("Type a line here: ");
  fgets(text, 100, stdin);
  printf("You typed the line: %s", text);
  return 0;
}
/**
 * the fgets also take up \n
 * into the variable
*/