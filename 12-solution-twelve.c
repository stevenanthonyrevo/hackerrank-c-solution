#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int sum = 0; 
    int n;    
    scanf("%d", &n); // n is the size of the array 
    int *arr = (int*)malloc(n * sizeof(int)); // custom array   
    for (char i = 0; i < n; i++) {
        scanf("%d ", &arr[i]); // array contains space separated integer 
        sum += arr[i];  // for each integer assigned to array assign new sum value    
    }    
    free(arr);  // free memory 
    printf("%d", sum); // print the total sum 
    return 0;
}
