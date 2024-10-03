#include <stdio.h>
#include "encrypt.h"

int main() {

	int x;
	printf("Enter your word:\n");
	char msg[80];
	    while (fgets(msg, 80, stdin)) {

	        encrypt(msg);
	        printf("%s", msg);
	    }
}
 
