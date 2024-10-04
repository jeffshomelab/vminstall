#include <stdio.h>

typedef struct human{
    char* name;
    int age;
    char* favfood;
} person;

int birthday(person *u){

    (*u).age = (*u).age+1;
    printf("Happy birthday, %s.  You are now %i years old!!\n", (*u).name, (*u).age);
}


int main(int argc, char* argv[]) {

    person jeff = {"Jeff", 49, "Pizza"};
    birthday(&jeff);
    printf("Happy birthday, %s.  You are now %i years old!!\n", jeff.name, jeff.age);



}