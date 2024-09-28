## Strings

C does not have a string datatype.  Instead, an Array of chars is used.  

- As an array is used, a "string" is mutable and can be changed.
- C expects a null terminator value (\0) at the end of the array.

**Note:** The null terminator is not a printable character.

If you create your array like this, C will add it in for you:

```
char myArr3[] = {"JEFF"};
```

if you create it like on the of the following, then you must add it in manually.  You may need to increase the size of the array to account for this.

```sh
char myArr1[4];

myArr1[0] = 'J';
myArr1[1] = 'A';
myArr1[2] = 'S';
myArr1[3] = '\0';   //Manually added, so it's good.
```
**-or-**
```sh
char myArr2[] = {'J','A','S'}  //Missing null terminator, will lead to unexpected results.
```

If the null terminator is omitted, when you attempt to print the array you may end up with random results.  It may **appear** to work, but it's only coincidence.  C may print extra characters until it finds the null termination value in 'some other' variable. 

As an example, the following should print:

**JAS
BTR**

but it's cycled through and reprinted the first array because myArr2 did not contain the null terminator:

```sh
myArr1 = JAS
myArr2 = BTRJAS
```

### Inputting Values

When an array is created and you want to accept user input, you need to make sure the user is not allowed to exceed the size of the array.

When using scanf, you can limit the input size with %#s, where # is the number of characters you want to set as a limit.  Anything after that will be truncated:

```sh
char yourName[10];
printf("Please enter your name: ");
scanf("%9s", &yourName);
```

This will limit the input to 9 characters.

## String Literal

- String literals are a sequence of characters stored in the "Constant" memory block which is **read-only**.
- Defined by:
```
char *myvar = "here is my string";
```