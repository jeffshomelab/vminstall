Strings

C does not have a string datatype.  Instead, an Array of char's is used.  C expects a null terminator value (\0) at the end of the array:

If you create your array like this, C will add it in for you:

```sh
char myArr3[] = {"JEFF"};
```

if you create it like on the of the following, then you must add it in manually.  You may need to increase the size of the array to account for this.

```sh
char myArr1[4];

myArr1[0] = 'J';
myArr1[1] = 'A';
myArr1[2] = 'S';
myArr1[3] = '\0';

//or

char myArr2[] = {'J','A','S'}
```

If you don't, when you attempt to print the array you may end up with random results.  It may 'appear' to work, but it's only coincidence.  C may print extra characters until it finds the null termination value in 'some other' variable. 

As an example, the following should print:

JAS
BTR

but it's cycled through and reprinted the first array because myArr2 did not contain the null terminator:

```sh
myArr1 = JAS
myArr2 = BTRJAS
```
