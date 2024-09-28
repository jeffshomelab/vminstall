#include <stdio.h>
#include <string.h>

void doubleMe(char myArr2[]) {

    printf("The sizeof myArr2 in doubleMe is %li\n", strlen(myArr2));

}

int main(int argc, char* argv[]) {

    char myArr1[10] = {"JEFFREYAS"};

    printf("Array: %p\n",&myArr1);
    for(int x = 0; x < 10; x++) {
        printf("%i: %p\n", x, &myArr1[x]);
    }



    int length = &myArr1[9] - &myArr1[0];
    printf("Length is: %i\n", length + 1);


    printf("What the heck: %c\n", myArr1[0]);
    printf("What the heck: %c\n", *myArr1);

    int myNumArr1[4] = {1,2,3};

    

    printf("The myNumArr1[0] &addr is: %p\n", &myNumArr1);
    printf("The myNumArr1[1] &addr is: %p\n", &myNumArr1[1]);

    int *myPtr = myNumArr1; //*myPtr holds the addr of myNumArr1.  Note, when creating the variable this way you do not need the & prefix.
    printf("The *myPtr + 0 value is: %i\n", *myPtr);
    printf("The *myPtr + 1 value is: %i\n", *myPtr+1); //+1 = +4 bytes
    printf("The *myPtr + 2 value is: %i\n", *myPtr+2);

//    printf("The myNumArr1 &addr is: %i\n", myNumArr1[0]);
    
  //  printf("The myNumArr1[1] &addr is: %i\n", myNumArr1[1]);


    /*printf("The sizeof myArr1 in main is %li\n", sizeof(myArr1));
    printf("Here is the second value: %i\n", myArr1[1]);
    doubleMe(myArr1);
    printf("Here is the second value: %i\n", myArr1[1]);
    */
   




}
