#include <stdio.h>
#include <string.h>

int main() {

    char str_1[] = "My test string";
    char str_2[] = "test";

    for(int x = 0; x<strlen(str_1); x++) {
        printf("%i: The value %c is at addr: %p\n", x, str_1[x], &str_1[x]);
    }

    char *ret = strstr(str_1, str_2);
    
    printf("\nThe string [%s] was found at: %p with ASCII value of %i and HEX value of %x\n", ret, ret, ret, ret);

    if(ret == NULL)
        printf("The value of ret is NULL");

    //for(int y=0; y<128; y++) {
    //    printf("The value of %i is %x\n", y, y);
    //}

    return 0;

}