#include <stdio.h>

void doubleMe(int *x, int y) {
    *x = *x * 2;  //Modify original variable
     y = y * 2; //No pointer, won't update original.
}


int main(int argc, char* argv[]) {

int x = 4;
int y = 6;

printf("The value of x is %i\n", x);
printf("The value of y is %i\n", y);
doubleMe(&x, y);  // Pass a pointer for x, value of y.
printf("Now, the value of x is %i\n",x);
printf("The value of y is still %i\n", y);

return 0;
}
