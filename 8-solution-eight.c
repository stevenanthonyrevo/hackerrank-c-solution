#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int posone;
    int postwo;
    int posthree;
    int posfour;
    int sum;
    
    scanf("%d", &n);
    
    //Complete the code to calculate the sum of the five digits on n.
  
        if (n >= 99999) {
            printf("%s", "to high");       
        } else {
       
            //printf("%d", n / 1 % 10 );
            //printf("%d", n / 10 % 10 );
            //printf("%d", n / 100 % 10 );
            //printf("%d", n / 1000);
            
            posone = (n / 10000);
            postwo = (n/ 100) % 10;
            posthree = (n / 10) % 10;
            posfour = (n / 1) % 10;
            
            //printf("%d", posone);
            //printf("%d", postwo);
            //printf("%d", posthree);
            //printf("%d", posfour);
            
            // print the sum of digits based on position 
            
            sum = posone + postwo + posthree + posfour;
            
            printf("%d", sum);
            
        }
    
    return 0;
}
