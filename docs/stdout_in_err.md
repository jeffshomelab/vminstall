## Standard Input (stdin)

>**Key Points**
> - Input (stdin) can be redirected using < *filename*
> - Output (stdout) can be redirected using > *filename*
> - Error (stderr) can be redirect using 2> *filename*
> - fprintf allows you define the output method: stdout or stderr
> - A pipe | can be used to join two or more processes.  The output from the first process becomes the input to the "next" process.
----

The standard input method is the keyboard.  However, this can be overwritten with a commmand line argument using <:

```sh
csv2json < data.csv
```

This will read the file data.csv and input it into the program.  In the code below, scanf is expecting three attributes which can be passed from the file.

```sh
include <stdio.h>

int main() {

float latitude;
float longitude;
char info[80];
int started = 0;

puts("data=[");
while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {
...
```

## Standard Output (stdout)
The standard output is the display.  However, this can be overwritten with a command line argument using >:

```sh
csv2json > json.data
```

This will redirect the output from the program to a file called json.data.

```sh
#include <stdio.h>

int main() {

...
puts("data=[");
while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {

    ...
    } else
        printf("{latitude: %f, longtitude: %f, info: '%s'}", latitude, longitude, info);

}
puts("\n]");
return 0;

}
```

In the above, the printf and puts commands would normally print this data to the screen, but > json.data overrides this behavior and the output will be saved to the file.

### Pipe (|)

When used in the command line, a pipe is a connection between two processess, such that the stdout from on process beocmes the standard input of the other process.
- Multiple processes can be joined by addin an additional pipe.
- When < and > are used, the input will be passed to the first process.  The output will be passed from the last process.

Usage:

- Bermuda.exe:  Performs some filtering and uses printf to print data to the display.
- csv2json.exe:  Expects some input from scanf, in this the "output" of bermuda.c is used, to perform some functionality and uses printf to output transformed data to json.data
- data.csv: The input file that is passed to the first process, bermuda.exe

```sh
(./bermuda.exe | csv2json.exe) < data.csv > json.data
```


## Standard Error (stderr)

The Standard Error is a second output method specific for errors.  By default the stderrr output is sent to the display.

- stderr can be redirected from the cmd line with **2>** *errors.txt*
- using **fprintf**

### fprintf

The fprintf() function allows you to choose where you want to send text to. You can tell fprintf() to send text to stdout (the Standard Output) or stderr (the Standard Error).

- The printf() function is just a version of a more general
function called fprintf():

   ```sh
    else if(longitude > 90 || longitude < -90) {
        fprintf(stderr, "Invalid longitude: %f\n", longitude);
        return 2;
    } else
        printf("{latitude: %f, longtitude: %f, info: '%s'}", latitude, longitude, info);
```
- **printf** can be used to direct "expected" output to the stdout path (display, redirection, etc.)
- **fprintf** allows you direct specific output to stderr (or stdout) which can be different than the default.