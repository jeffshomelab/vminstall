## string.h - strchr()

Find the first occurence of a character from a given string. This function operate the task of null characters(\0) or null-ended string. 

**Usage**

> char *strchr(const char *str, int search_str)

- str: This parameter represent a given string.
- search_str: This parameter refers to specific character to be searched in a given string.

**Return Value**

This function returns a pointer to the first occurrence of the character i.e. "search_str" in the string(str), or NULL if the character is not found.

```sh
#include <stdio.h>
#include <string.h>

int main() {

    char str_1[] = "My test string";
    char str_2 = 't';

    for(int x = 0; x<strlen(str_1); x++) {
        printf("%i: The value %c is at addr: %p\n", x, str_1[x], &str_1[x]);
    }

    char *ret = strchr(str_1, str_2);
    
    
    if(ret != NULL) {
        printf("\nThe string [%c] was found at: %p\n", *ret, ret);
        //*ret is when we want to dereference the addr and get the value - %c
        //ret is used when we want the addr - %p

    } else {
        printf("\nThe string [%c] was found at: %p with ASCII value of %i and HEX value of %x\n", ret, ret, ret, ret);
        printf("The value of ret is NULL");
    }
    
    return 0;

}
```

**Finding all occurances**

```sh
#include <stdio.h>
#include <string.h>

int main() {

    char str_1[] = "My test string";
    char str_2 = 't';

    for(int x = 0; x<strlen(str_1); x++) {
        printf("%i: The value %c is at addr: %p\n", x, str_1[x], &str_1[x]);
    }

    char *ret = strchr(str_1, str_2);
    
    while(ret != NULL) {
        printf("The string %c was found at: %p\n", *ret, ret);
        ret = strchr(ret+1, str_2);
    }
        
    return 0;
}
```
