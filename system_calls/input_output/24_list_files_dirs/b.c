#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <dirent.h>

int listfiles(const char * dirname){
  DIR* dir = opendir(dirname);
  if(dir==NULL)
    return 1;

  struct dirent* entity;
  entity = readdir(dir);
  while(entity!=NULL){
    printf("%hhd %s\n", entity->d_type ,entity->d_name);
    if(entity->d_type == DT_DIR && strcmp(entity->d_name, ".")!=0 && strcmp(entity->d_name, "..")!=0){
      char path[100] = { 0 };
      strcat(path, dirname);
      strcat(path, "/");
      strcat(path, entity->d_name);
      listfiles(path);
    }
    entity = readdir(dir);
  }
  closedir(dir);
  return 0;
}

int main(int argc, char const *argv[]){
  listfiles("/home/warmachine/Desktop");
  return 0;
}
