/*
Write a program in C to display the n terms of odd natural number and their sum. 
*/

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("odd number calculator\n\n");
    printf("enter no of terms: ");
    scanf("%d", &n);
    printf("--------------------------\n");
    printf("the odd numbers are: ");
    for (int i = 0; i <=n; i++)
    {
        printf("%d ", 2 * i + 1);
        sum = sum + (2 * n + 1);
    }
printf("\nthe sum of the %d odd numbers are: %d\n", n, sum);
    return 0;
}
