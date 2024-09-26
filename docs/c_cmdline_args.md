### Command Line Arguments

When a program is executed, arguments can be passed that can be used within a program.

- If you pass an argument with " " it will be treated as a single argument (e.g. "First Name")

```sh
int main(int argc, char* argv[]) {

    for (int i=0; i < argc; i++) {
        printf("%i. Parameter %i is %s\n", i, i, argv[i]);
    }

return 0;
}

jlabguy@Mainlab1:~/jeffshomelab/projects/c$ ./argtest.exe "jeff" 123
0. Parameter 0 is ./argtest.exe
1. Parameter 1 is jeff
2. Parameter 2 is 123
```

**int argc:** The number of arguments that were passed.
- Index 0 will always be the name of the executable (e.g. myprog.exe)

**char\* argv[]:** An array the holds the arguments that were passed. 
