#include <stdio.h>
#include <string.h>

int main() {

    char myArr3[] = {"JEFF"};
    char myArr1[4];

    myArr1[0] = 'J';
    myArr1[1] = 'A';
    myArr1[2] = 'S';
    myArr1[3] = '\0';

    char myArr2[3];

    myArr2[0] = 'B';
    myArr2[1] = 'T';
    myArr2[2] = 'R';

    printf("myArr1 = %s\n", myArr1);
    printf("myArr2 = %s\n", myArr2);
    printf("myArr3 = %s\n", myArr3);
    printf("myArr3 = %i\n", sizeof(myArr3));    
    
    return 0;
}