#include <stdio.h>

int main(int argc, char* argv[]){

FILE *out_file1 = fopen("output1.txt", "w");
FILE *out_file2 = fopen("output2.txt", "w");

for(int x = 0; x<100; x++){

    fprintf(out_file1, "First File: This number is %i\n", x);
}

for(int y = 100; y>0; y--){

    fprintf(out_file2, "Second File: This number is %i\n", y);
}

fclose(out_file1);
fclose(out_file2);


}