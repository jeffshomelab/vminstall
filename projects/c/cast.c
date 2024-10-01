#include <stdio.h>

int main(){

int x = 7;
int y = 2;

float a = x / y;
float b = (float) x / y;
float c = (float) x / (float) y;

printf("a:%f b:%f c:%f\n", a,b,c);

return 0;
}