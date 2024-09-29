#include <stdio.h>

int main() {

float latitude;
float longitude;
char info[80];
int started = 0;

while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {

    printf("%f,%f,%s\n", latitude*2, longitude+5, info);

}

return 0;

}