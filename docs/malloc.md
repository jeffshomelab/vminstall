
## malloc()
 Unlike memory allocated on the stack (e.g., local variables in functions), memory allocated with malloc() at run time is allocated on the heap and remains available until explicitly freed. Since stack memory is limited, allocating large amounts of memory on the stack can cause stack overflow.

- malloc allocates space and gives you a pointer to it.
`island *p = malloc(sizeof(island));` <-- "Create enough space for an island, and store the address in variable p."
- Memory in the heap does not automatically get released and you must manually release it using `free(name)`
- malloc returns a general-purpose pointer with type void*
- malloc() and free() requires **#include <stdlib.h>**

```sh
island* create(char *name) {
    island *i = malloc(sizeof(island));
    i->name = strdup(name); //creates a copy of the value
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;
    return i;
}
```

### Linked List
A linked list is a sequence of nodes where each node contains two parts:

- Data: The value stored in the node.
- Pointer: A reference to the next node in the sequence.

Unlike arrays, linked lists do not store elements in contiguous memory locations. Instead, each node points to the next, forming a chain-like structure and to access any element (node), we need to first sequentially traverse all the nodes before it.

A linked list is a **recursive structure**, a struct that contains a link to another
struct of the same type.
- If you use the typedef command, you can normally skip giving the struct a proper name. But in a recursive structure, you need to include a pointer to the same type. C syntax won’t let you use the typedef alias, so you need to give the struct a proper name. That’s why the struct here is called struct island.

```sh
typedef struct island {  //You must give the struct a name
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;
```