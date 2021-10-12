#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// const char* PERSON_FORMAT_IN = "{\"name\": \"%[^,]\", \"age\": %d, \"gender\": \"%c\"}";
// const char* PERSON_FORMAT_OUT = "{\"name\": \"%s\", \"age\": %d, \"gender\": \"%c\"}";

const char* PERSON_FORMAT_IN = "(%[^,], %d, %c)";
const char* PERSON_FORMAT_OUT = "(%s, %d, %c)\n";


typedef struct {
    char name[20];
    int age;
    char gender;
} Person;

int main(int argc, char* argv[]) {
    Person p1 = {
        .name = "Andrew",
        .age = 22,
        .gender = 'M'
    };
    Person p2;
    
    FILE* file = fopen("people.dat", "w+");
    if (file == NULL) {
        return 1;
    }
    
    fprintf(file, PERSON_FORMAT_OUT, p1.name, p1.age, p1.gender);
    fseek(file, 0, SEEK_SET);
    fscanf(file, PERSON_FORMAT_IN, p1.name, &p1.age, &p1.gender);
    
    return 0;
}