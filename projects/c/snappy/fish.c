#include <stdio.h>
#include <string.h>

struct prefs {
    const char* food;
    float exercise_hours;
};

struct fish {
    const char* name;
    const char* species;
    int teeth;
    int age;
    struct prefs care;
};

void catalog (struct fish f){
    printf("%s is a %s with %i teeth. He is %i\n", 
    f.name, f.species, f.teeth, f.age);
}

void label (struct fish f){
    printf("Name: %s\nSpecies: %s\n", f.name, f.species);
}

void care_instructions (struct fish f){
    printf("Food: %s\nExcerise: %.1f\n", f.care.food, f.care.exercise_hours);
}

int main(int argc, char* argv[]) {

    
    int zz = 0;
    struct fish snappy = {"Snappy", "Piranha", 69, 4, {"Meat", 7.5}};
    //struct fish gnasher = snappy;

    //printf("%s\n", snappy.name);
    catalog(snappy);
    label(snappy);
    care_instructions(snappy);
        

    // struct fish* snappy_ptr = &snappy;
    // struct fish* gnasher_ptr = &gnasher;
    // const char* snappy_name_ptr = snappy.name;
    // const char* snappy_species_ptr = snappy.species;

    // printf("%p, %ld\n",zz_ptr, (long int)zz_ptr);    
    // printf("%p, %ld\n",snappy_name_ptr, (long int)snappy_name_ptr);
    // printf("%p, %ld\n",snappy_species_ptr, (long int)snappy_species_ptr);    
    // printf("%p, %ld\n",snappy_ptr, (long int)snappy_ptr);
    // printf("%p, %ld\n",gnasher_ptr, (long int)gnasher_ptr);
    
    // for(int x=0; x<(strlen(snappy.name)+1); x++){
    //     printf("%c\n", snappy.name[x]);
    // }
    
    return 0;
}