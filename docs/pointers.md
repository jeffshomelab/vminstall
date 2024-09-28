## Pointers

(Memory) Pointers allow you to pass the address of a variable (e.g. to a function) so the function can modify the value of the original variable.  Without pointers, you generally are only passing the value which means the function is not able to modify the original variable. 

- To print the location of the variable in hex (base16), use %p in printf().
- To pass the address of a variable, prefix with &
    ```doubleMe(&x)```
- To create a (pointer variable) for an address, prefix with *.  This is also known as "dereferencing".S
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
**Arrays**

When an array created, the array variable name actually stores a pointer to the address of the first item in the array.

When you pass an array to a function, you are *actually* passing a pointer to the array evening if you did not include the & prefix.  This means that the 

```sh
int main(int argc, char* argv[]) {

    char myArr1[10] = {"JEFFREYAS"};

    printf("Array: %p\n",&myArr1);
    for(int x = 0; x < 10; x++) {
        printf("%i: %p\n", x, &myArr1[x]);
    }
}

**Output:**
Array: 0x7fffc2a471ae
0: 0x7fffc2a471ae
1: 0x7fffc2a471af
2: 0x7fffc2a471b0
3: 0x7fffc2a471b1
4: 0x7fffc2a471b2
5: 0x7fffc2a471b3
6: 0x7fffc2a471b4
7: 0x7fffc2a471b5
8: 0x7fffc2a471b6
9: 0x7fffc2a471b7
```
**Note:** Array memory is contiguous (??) so each address is incremented by 1 *because* the array is made up of characters which consume 1 byte.

For an array of integers (which consume 4 bytes), the address would be incremented by 4.

```sh
int myNumArr1[4] = {1,2,3};

    printf("The myNumArr1[0] &addr is: %p\n", &myNumArr1);
    printf("The myNumArr1[1] &addr is: %p\n", &myNumArr1[1]);

**Output:**
The myNumArr1[0] &addr is: 0x7ffefaadfba0
The myNumArr1[1] &addr is: 0x7ffefaadfba4 //ba0 + 4
```

If using the * followed by a variable name "dereferences" the variable in that it looks at the value that is stored at that memory location, then the following are equivalent:

```sh
   char myArr1[10] = {"JEFFREYAS"};
   printf("myArr1 first value: %c\n", myArr1[0]); //J
   printf("myArr1 first value: %c\n", *myArr1);  //J
```

**Pointer Arithmetic**
When a point is created, it's technically just an int that can be incremented.  For example, add +1 to a pointer that points to an array of ints will add "+4 bytes" to display the next element:

```sh
    int myNumArr1[4] = {1,2,3};

    int *myPtr = myNumArr1; //*myPtr holds the addr of myNumArr1.  Note, when creating the variable this way you do not need the & prefix.

    printf("The *myPtr + 0 value is: %i\n", *myPtr);
    printf("The *myPtr + 1 value is: %i\n", *myPtr+1); //+1 = +4 bytes
    printf("The *myPtr + 2 value is: %i\n", *myPtr+2);

    **Output:**
    The *myPtr + 0 &addr is: 1
    The *myPtr + 1 &addr is: 2
    The *myPtr + 2 &addr is: 3
```

**Memory**
- If you declare a variable *inside* a function like main(), the computer will store it in a section of memory called the **stack**.
- If the variable is declared *outside any function*, it will be stored in the **globals** section of memory.