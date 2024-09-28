## fgets

```sh
fgets(char* str, int count, stream[file or stdin])
```

### Parameters

>-str	-	pointer to an element of a char array
>-count	-	maximum number of characters to write (typically the length of str)
>-stream	-	file stream to read the data from

### Return
>- str on success, null pointer on failure.

**Important Note**
The input will be limited to count - 1 (to account for null terminator).
If the user enters a string (e.g. jeffrey) that is smaller than count (e.g. 80), and they press **Enter**, the input array will contain a new line character:

```sh
jeffrey\n\0
```

You can check for the existence of these characters with strchr:

```sh
char *check_for_nl = strchr(input, '\n'); //Does newline exist?
char *check_for_nt = strchr(input, '\0'); //Does null terminator exist?

printf("in: %p\n", input);
printf("nl: %p\n", check_for_nl); 
printf("nt: %p\n", check_for_nt);
```

If you have an array that contains \n\0 then you can replace this new line character with the following:

```sh
char* new_line_occ = strchr(input, '\n');
if(new_line_occ != NULL) {
    *new_line_occ = '\0';
}
```
---
## scanf
