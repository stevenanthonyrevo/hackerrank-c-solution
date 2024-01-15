#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);    
    char num[][10]={"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // 
    for (int i = a; i <= b; i++) {
        if (1 <= i && i <= 9) {
            printf("%s\n", num[i]);
        } else if (i > 9 && i % 2 == 0) {
                printf("%s\n", "even");
        } else if (i > 9 && i % 2 != 0) {
                printf("%s\n", "odd");
       }
    }
    return 0;
}
