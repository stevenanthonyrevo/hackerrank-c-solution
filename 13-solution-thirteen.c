#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    int o[1000]; 
    int r[1000];
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    for(i = 0; i < num; i++) {
       int last = arr[num]; // 12 
       int total = num; // 6
       int z = i + 1;     // 1, 2, 3, 4, 5, 6 
       //printf("%d", z);                       
       o[i] = arr[z - 1];  
       //printf("%d ", o[i]);  
    }

    for(i = 0; i < num; i++) {
       int v = num - i - 1 + 1;   // 6, 5, 4, 3, 2, 1
       //printf("%d ", v); 
       r[i] = arr[v - 1];
       //printf("%d ", r[i]); 
    }

    for(i = 0; i < num; i++) { 
        printf("%d ", r[i]); 
    } 
    
    free(arr);
    return 0;
}
