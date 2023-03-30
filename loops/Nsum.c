/*
 Find Sum Of First n Natural Numbers in C
 */

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Input number of terms: ");
    scanf("%d", &n);
   sum = (n * n + n)/2;
   printf("-----------------------------\n");
   printf("Displaying Information:-\n");
    printf("The Sum of First %d Natural Numbers are: %d\n", n, sum);
    
   
    

    return 0;
}
