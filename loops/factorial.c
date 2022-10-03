#include <stdio.h>
int main()
{
    int n, multiplication = 1;
    printf("enter ther numbr you want to factorial: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        multiplication = multiplication * i;
    }
    printf("The factorial of %d is: %d", n, multiplication);
    return 0;
}
