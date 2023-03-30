/*
Write a program in C to display the n terms of even natural number and their sum. 
*/


#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Input number of terms: ");
    scanf("%d", &n);
    printf("The even numbers are: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i);
        sum = sum + 2 * i;
    }

    printf("\nThe Sum of even Natural Number upto %d terms: %d\n", n, sum);

    return 0;
}
