#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {

//Give a tracks list
//Asl the user which track they are looking for.
//Get the input and use it to search through the tracks
//Display any matches.  strstr()

    char tracks[][80] = {
        "I left my heard in Harvard Med School",
        "Newark, Newark - A wonderful town",
        "Dancing with a Dork",
        "From here to maternity",
        "The girl from Iwo Jima",
    };
    char input[80];

    printf("Please enter a string to search for:\n");
    //fgets(input, 80, stdin);

    if(fgets(input, 3, stdin) == NULL) {

        printf("Something bad happened....\n");
        return 1;
    }
    
    char *check_for_nl = strchr(input, '\n');
    char *check_for_nt = strchr(input, '\0');

    printf("in: %p\n", input);
    printf("nl: %p\n", check_for_nl);
    printf("nt: %p\n", check_for_nt);
    printf("strlen%li\n", strlen(input));

    //printf("You typed: %s\n", input);
    puts(input);
/*    char* new_line_occ = strchr(input, '\n');
    if(new_line_occ != NULL) {
        *new_line_occ = '\0';
    }
*/
    
    char *songs = tracks[1];
    printf("%s\n", tracks[1]);
    
    char* ret = strstr(songs, input);
    //printf("length %i\n", strlen(input));
    printf("The return is %s\n", ret);


return 0;
}