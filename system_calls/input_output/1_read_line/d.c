#include<stdio.h>
int main(int argc, char const *argv[])
{
  char text[100], text2[100];
  printf("Type a line here: ");
  scanf("%[^\n]s", text); //read everything you get \n
  printf("You typed the line: %s\n", text);

  //consume the extra \n from the buffer
  getchar();

  printf("Type a line here: ");
  scanf("%[^\n]s", text2);
  printf("You typed the line: %s\n", text2);

  return 0;
}