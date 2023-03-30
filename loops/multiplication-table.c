// C Program to Generate Multiplication Table of a Given Number

#include <stdio.h>
int main()
{
    int num;
    printf("Enter The Value of Number Whose Multiplication Table Is to be Printed: ");
    scanf("%d", &num);
    printf("The Multiplication Table of %d is: \n\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}
