#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <dirent.h>

int main(int argc, char const *argv[])
{
  DIR* dir = opendir("../");
  if(dir==NULL)
    return 1;

  struct dirent* entity;
  entity = readdir(dir);
  while(entity!=NULL){
    printf("%hhd %s\n", entity->d_type ,entity->d_name);
    // if(entity->d_type = DT_DIR)
    entity = readdir(dir);
  }


  closedir(dir);
  return 0;
}
