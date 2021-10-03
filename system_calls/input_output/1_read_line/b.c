#include<stdio.h>
int main(int argc, char const *argv[])
{
  char text[100];
  printf("Type a line here: ");
  scanf("%[^\n]s", text);
  printf("You typed the line: %s", text);
  return 0;
}