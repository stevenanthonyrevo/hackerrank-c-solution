#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char sentence[1000];
    char *s;    
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    
        for (int k = 0; k < strlen(&s[0]); k++) {
  
            // search input for whitespace character 
            if (s[k] == *"\40") {
                // empty 
                // apply new line 
                printf("\n");
            } else {
                // assign sentence with large character space to non whitespace character
                sentence[k] = s[k]; 
                printf("%c", sentence[k]);
            }
        }
        
    return 0;
}
