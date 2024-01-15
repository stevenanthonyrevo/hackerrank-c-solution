#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
// 1 = 00000001
// 3 = 00000011 (In Binary)
// 5 = 00000101 (In Binary)
// 6 = 00000110
// 7 = 00000111

// 3 + 5 = 7 
// 3 + 3 = 6

// Print as 
// variable n variable k operator and operator or operator xor 
// 1 2      0 3 3 
// 1 3      1 3 2 
// 2 3      2 3 1 

// 2 
// 0 
// 2 

void calculate_the_maximum(int n, int k) {
  //Write your code here.
  
  int max_and = 0;
  int max_or = 0;
  int max_xor = 0;
  
  for (int i = 1; i <= n; i++) { //a 
      for (int j = i + 1; j <= n; j++) { //b
           if ((i & j) > max_and && (i & j) < k) {
               max_and = (i & j);
           } 
           if ((i | j) > max_or && (i | j) < k ) {
               max_or = (i | j);
           } 
           if ((i ^ j) > max_xor && (i ^ j) < k) {
               max_xor = (i ^ j);
           }
      }
  }
  
 printf("%d\n%d\n%d\n", max_and, max_or, max_xor);  

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
