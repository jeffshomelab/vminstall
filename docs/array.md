## Arrays

>**Key Points**
>- Every value in the array, in C, must have the same type.
>- You must always specify the size of the array (zero indexed). C does not provide dynamic arrays out of the box.
>- There is no built-in method to determine the length of the array, but you can calculate it based:
>-- Total size of the array (in bytes):  sizeof(myArr)
>-- Size of the first item in the array (in bytes):  sizeof(myArr[0])
>-- Length of Array: sizeof(myArr) / sizeof(myArr[0]);
>- Creating an array:
>-- int prices[5] = { 1, 2, 3, 4, 5 };
>-- char myArr = { 'j', 'e', 'f', 'f', '\0' };
>-- char myArr[] = {"jeffrey"};


- You can use a constant to define the size:

```sh
const int SIZE = 5;
int prices[SIZE];
```

- You can initialize an array at definition time:

```sh
int prices[5] = { 1, 2, 3, 4, 5 };
```

- Values can be accessed using [ ]:

```sh
prices[1] = 2;
```

- End of string value, or null terminator, (non-printable character) is "\0", allows you to pass the array to printf:

```sh
char myArr = { 'j', 'e', 'f', 'f', '\0' };
printf("Your name is: %s", myArr);
Result: jeff
```

- If you pass a string to a char array, C will automatically create an array of appropriate size with the terminator.

```
char myArr[] = {"jeffrey"};
```

- int x;  //declaration
- x = 4;  //definition

•	String: An array of chars is used to store a "string".
o	When initializing, uses double quotes: "My name is"
o	strcat(s1,s2) - Concatenates two array strings.	
	Requires #include <string.h>
o	strcmp(s1,s2) - Compares to strings, true when return value is 0.
	Requires #include <string.h>
o	strlen(myArr) - Used to display the length of a string in an array.
o	isupper(myArr[1])
o	tolower(myArr[1])
	Requires #include <ctype.h>
•	
