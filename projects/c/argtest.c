#include <stdio.h>

int main(int argc, char* argv[]) {

for (int i=0; i < argc; i++) {
    printf("%i. Parameter %i is %s\n", i, i, argv[i]);
}



return 0;

}
 