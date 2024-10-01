## getopt()

getopt() is a builtin function in C and is used to parse command line arguments.
- Requires: `#include <unistd.h>`

> getopt(int argc, char *const argv[], const char *optstring)

- char *optstring is the list allowed options. Example: "dt:" means that arguments -d and -t are allowed.
-- If the argument includes an ":" it means that a value is required.  Example:  runme.exe -t "c:\home" where "c:\home" is the required value.

**Return Value**
- If the option takes a value, that value is pointer to the external variable optarg.
- '-1' if there are no more options to process.
- '?' when there is an unrecognized option and it stores into external variable optopt.

The following program allows two arguments, -t and -d.  The latter requires a value to be included. Any additional options (i.e. ones that are NOT prefixed with a "-" will be included in the ingredients loop.

```sh
#include <stdio.h>
#include <unistd.h>

//Usage:  getopt.exe -d now -t Anchovies Pineapple

int main(int argc, char* argv[]) {

    char *delivery = "";
    int thick = 0;
    int count = 0;
    char ch;

    while((ch = getopt(argc, argv, "d:t")) != EOF) {    
        switch(ch) {

            case 'd':
                delivery = optarg;
                break;
            case 't':
                thick = 1;
                break;
            default:
                fprintf(stderr, "Unknown option: %s\n", optarg);
                return 1;
        }
    }
    
    argc -= optind;
    argv += optind;

    if(thick)
        puts("Thick crust.");

    if (delivery[0])
        printf("To be delivered %s.\n", delivery);

    puts("Ingredients:");

    for(count = 0; count < argc; count++)
        puts(argv[count]);
    return 0;
}
```