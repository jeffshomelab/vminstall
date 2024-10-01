## string.h - strstr()

Returns a pointer to the first index of a specified substring in another string. The main goal of strstr() is to search for a substring within a larger string and it helps to find the first occurrence of a specified substring.

**Usage**

> char *strstr (const char *str_1, const char *str_2);

- str_1: This is the main (larger) string.
- str_2: The substring to search for.

**Return Value**

The function return the value based on following conditions:

- The function returns a pointer to the first characters of str_2 in str_1 or null pointer if str_2 is not found in str_1.
- If str_2 is found as an empty string, str_1 is returned.

```%
#include <stdio.h>
#include <string.h>

int main() {

    char str_1[] = "My test string";
    char str_2[] = "test";

    for(int x = 0; x<strlen(str_1); x++) {
        printf("%i: The value %c is at addr: %p\n", x, str_1[x], &str_1[x]);
    }

    char *ret = strstr(str_1, str_2);
    printf("\nThe string [%s] was found at: %p\n", ret, ret);

    return 0;
}
```
**Output (string found)**
```sh
0: The value M is at addr: 000000acbdfff8c1
1: The value y is at addr: 000000acbdfff8c2
2: The value   is at addr: 000000acbdfff8c3
3: The value t is at addr: 000000acbdfff8c4
4: The value e is at addr: 000000acbdfff8c5
5: The value s is at addr: 000000acbdfff8c6
6: The value t is at addr: 000000acbdfff8c7
7: The value   is at addr: 000000acbdfff8c8
8: The value s is at addr: 000000acbdfff8c9
9: The value t is at addr: 000000acbdfff8ca
10: The value r is at addr: 000000acbdfff8cb
11: The value i is at addr: 000000acbdfff8cc
12: The value n is at addr: 000000acbdfff8cd
13: The value g is at addr: 000000acbdfff8ce

The string [test string] was found at: 000000acbdfff8c4
```
- **[test string]**:  The printf statement prints the value of ret as a %s.  As this is actually a char array, the value of ret points to an addr in the str_1 array.  The characters will print until the null terminator character is reached.


**Output (string NOT found)**
```sh
0: The value M is at addr: 0000004a331ffa51
...
The string [(null)] was found at: 0000000000000000
```
- The value of NULL is represented by ASCII 0 and can be verified by:

```sh
char *ret = strstr(str_1, str_2);
    
    printf("\nThe string [%s] was found at: %p with ASCII value of %i and HEX value of %x\n", ret, ret, ret, ret);

    if(ret == NULL)
        printf("The value of ret is NULL");
```