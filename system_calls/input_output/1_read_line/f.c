#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
  char text[10];

  printf("Type a line here: ");
  fgets(text, 10, stdin);
  text[strlen(text) - 1] = '\0';
  printf("You typed the line: %s", text);
  return 0;
}
/**
 * the fgets also take up \n
 * into the variable
*/