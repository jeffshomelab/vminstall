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
- When using the struct variable, using one of the following format:
> - (*u).age = (*u).age+1;
> - t->age = t->age+1;  //The age field in the struct that t points to.

**Note:** The format is important! *(\*structname).field* or *structname->field*

### union

union allows you to define multiple data types to store a value

- A union will allocate enough space for the largest data type.
- Declared with `typedef union { ... } union_name;`

```sh
typedef union {
short count;
float weight;
float volume
} quantity;
```

When setting values, use one of the follow notations:


1. C89 notation allowed when setting the FIRST value (e.g. short count);
> quantity q = { 4 };  
2. **Designated initializer** sets a union field by name.
- Designated initializer are part of the C99 standard.  Not supported in C++.
> quantity q = { .weight=1.5 }; 
3. Using dot notation:
> quantity q;
> q.volume = 3.7;

### enum (enumeration)

enums allow you to create a list of symbols.
- symbols are separated by a comma
- symbols are zero-indexed

```sh
#include <stdio.h>

typedef enum {
 COUNT, POUNDS, PINTS
 } unit_of_measure;

typedef union {
  short count;
  float weight;
  float volume;
} quantity;

typedef struct {
  const char *name;
  const char *country;
  quantity amount; //union
  unit_of_measure units; //enum
} fruit_order;
 ```

### bit fields

bit fields allow you to set the size (in bits) of a the memory size of the individual elements of a struct.
- This allows you to minimize the memory needed when only 1s and 0s actually needed to be stored.
- bitfield = 4 can store numbers up to 15. bit field = 3 can store numbers up to 7.
- bitfields should be declared as **unsigned int**

The syntax to declare a bit field is:

> struct {
> data_type elem : width;
> };

Example to demonstrate memory usage:
```sh
#include <stdio.h>

/* define simple structure */
struct {
   unsigned int widthValidated;
   unsigned int heightValidated;
} status1;

/* define a structure with bit fields */
struct {
   unsigned int widthValidated : 1;
   unsigned int heightValidated : 1;
} status2;

int main() {

   printf("Memory size occupied by status1: %d\n", sizeof(status1));
   printf("Memory size occupied by status2: %d\n", sizeof(status2));
   
   return 0;
}

**Output**
Memory size occupied by status1: 8
Memory size occupied by status2: 4
```
