#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int numberOne; 
    int numberTwo; 
    float numberThree; 
    float numberFour; 
    
    int sum;
    int diff; 
  
    scanf("%d %d \n", &numberOne, &numberTwo);
    scanf("%f %f \n", &numberThree, &numberFour);

    printf("%d %d \n", numberOne + numberTwo, numberOne - numberTwo);
    printf("%.1f %.1f \n", numberThree + numberFour, numberThree - numberFour);
    
    return 0;
}

