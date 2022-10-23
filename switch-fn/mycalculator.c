// created by pratyush

#include <stdio.h>
int main()
{
    float a, b;
    char oparator;
    printf("measure urself>>>>>\n");
    printf("-----------------------\n");

    printf("what did u want to do: ");
    scanf("%c", &oparator);
    printf("enter ur first number: ");
    scanf("%f", &a);
    printf("enter ur second number: ");
    scanf("%f", &b);
    printf("-----------------------\n");
    printf("displaying answer.....\n\n");

    switch (oparator)
    {
    case '+':
        printf("%0.2f+ %0.2f= %0.2f\n", a, b, a + b);
        break;
    case '-':
        printf("%0.2f- %0.2f= %0.2f\n", a, b, a - b);
        break;
    case '*':
        printf("%0.2f * %0.2f = %0.2f\n", a, b, a * b);
        break;
    case '/':
        printf("%0.2f / %0.2f = %0.2f\n", a, b, a / b);
        break;
    case '%':
        printf("%0.2f %% %0.2f = %0.2f%\n", a, b, a / b * 100.00);
        break;
    default:
        printf("\t\t*****error****\n");
        break;
    }
    printf("-----------------------\n");
    return 0;
}

