#include <stdio.h>

int main() {

    char yourName[10];

    printf("Please enter your name: ");
    scanf("%9s", &yourName);

    printf("Your name is: %s\n", yourName);

    return 0;

}