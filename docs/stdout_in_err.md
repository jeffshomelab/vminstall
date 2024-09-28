## Standard Input (stdin)

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