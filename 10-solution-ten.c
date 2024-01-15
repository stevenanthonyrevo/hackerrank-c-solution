#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int row = (n + n) - 1;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            int min = i < j ? i : j;
            min = min < row - i ? min : row - i - 1;
            min = min < row - j ? min : row - j - 1;
            printf("%d ", n - min);
        }
        printf("\n");
    }
    
    return 0;
}
