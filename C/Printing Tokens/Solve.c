#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    char *tokens =strtok(s," ");
    while(tokens!=NULL){
        printf("%s\n",tokens);
        tokens = strtok(NULL," ");
    }
    
    return 0;
}