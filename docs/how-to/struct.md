## Struct

A struct allows you to group a number of pieces of data together.

- A struct is defined outside of main (e.g. below #include <stdio.h>)
- A struct definition is JUST a template.
- When creating an instance of a struct, use the following format `struct struct_name instance_name`
- Structs can NOT be accessed using [0], you must use dot notation using the variable name (e.g. fish.name)
- When you set one struct variable equal to another, a new variable is created and data is *copied*.
-- If one of the fields is a pointer, then the address is copied.  (e.g. both struct variables will "point" to the same addr);
- structs are fixed length
- Using typedef you can create an alias for a data type.
- When a struct is passed to a function it is *passed by value* and a clone of the struct is created.  See note below to pass by reference.

```sh
#include <stdio.h>

struct fish {
    const char* name;
    const char* species;
    int teeth;
    int age;
};
```
Structs can be nested and are accessed by dot-walking:
`struct_one.struct_two.fieldname`

```sh
//Define the struct
struct prefs {
    const char* food;
    float exercise_hours;
};

struct fish {
    const char* name;
    const char* species;
    int teeth;
    int age;
    struct prefs care; //Reference the struct in another
};

//Use the struct

void care_instructions (struct fish f){
    printf("Food: %s\nExcerise: %.1f\n", f.care.food, f.care.exercise_hours);
}

```

### typedef

typedef can be used to simplify the process of creating structs and variables.

**Usage**
> typedef struct *name* {
>    ....
>} shortname;
>
>//Create the struct variable
>shortname variable_name = {...}
- The initial *name* is optional.

*Create a variable

```sh
typedef struct cell_phone {
    int cellnum;
    const char* wallpaper;
} phone;
...
phone p = {5557879, "matrix.jpg"};

```
### Pass Struct by Reference
When a struct is passed to a function it is *passed by value* and a clone of the struct is created.  To pass by address, make the following changes:

- In the statement that passes the function, pass the address:
> birthday(&jeff);
- In the function, create a pointer variable:
> void birthday(turtle *t) {...}
- When using the struct variable, using the following format:
> (*u).age = (*u).age+1;

**Note:** The format is important! *(\*structname).field*