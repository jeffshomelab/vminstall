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

    // *ret = strchr(str_1, str_2);
    // if(ret != NULL) {
    //     printf("\nThe string [%c] was found at: %p\n", *ret, ret);
    // } else {
    //     printf("\nThe string [%c] was found at: %p with ASCII value of %i and HEX value of %x\n", ret, ret, ret, ret);
    //     printf("The value of ret is NULL");
    // }
    
    return 0;

}