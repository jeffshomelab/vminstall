#include <stdio.h>
#include <string.h>

void print_reverse(char *s) {

    printf("mno: %c\n", s[0]);
    size_t length = strlen(s); //size_t is a datatype for size of variables
    printf("The length of the string is %i\n", length);
    printf("%p\n%p\n", &s[0], &s[2]);
    char* t = s + length - 1; //Take the start address, add the length
    //then subtract 1 because the string literal is zero-indexed.

    while (t>= s) {
        printf("%c", *t);
        printf("--%p\n", t);

        t = t - 1;
    }
puts("");

}

int main(int argc, char* argv[]) {

print_reverse("cat");

return 0;
}