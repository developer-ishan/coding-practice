#include<stdio.h>
int main(int argc, char const *argv[])
{
  char text[100], text2[100];
  printf("Type a line here: ");
  scanf("%[^\n]s", text); //read everything you get \n
  printf("You typed the line: %s", text);

  printf("Type a line here: ");
  scanf("%[^\n]s", text2);
  printf("You typed the line: %s", text);

  return 0;
}
/**
 * The reason above code dont work because
 * /n from prev scan is left in the buffer
 * so next scanf will consume that \n from the buffer
*/