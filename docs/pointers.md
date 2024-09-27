## Pointers

(Memory) Pointers allow you to pass the address of a variable (e.g. to a function) so the function can modify the value of the original variable.  Without pointers, you generally are only passing the value which means the function is not able to modify the original variable. 

- To print the location of the variable in hex (base16), use %p in printf().
- To pass the address of a variable, prefix with &
    ```doubleMe(&x)```
- To create a (pointer variable) for an address, prefix with *
    ```x* ..```
- When you declare a pointer variable, you must declare the type of data is stored in the address it will point to:

    ```int *x = ...```

```sh
#include <stdio.h>

void doubleMe(int *x, int y) {
    *x = *x * 2;  //Modify original variable
    //Don't forget to use *x = ... and not x = ...
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
```

**Memory**
- If you declare a variable *inside* a function like main(), the computer will store it in a section of memory called the **stack**.
- If the variable is declared *outside any function*, it will be stored in the **globals** section of memory.