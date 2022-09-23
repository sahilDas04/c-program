#include <stdio.h>
int main()
{
    int a,b;
    char oparator;
    printf("measure urself>>>>>\n");
    printf("-----------------------\n");
    
    printf("what did u want to do: ");
    scanf("%c",&oparator);
    printf("enter ur first number: ");
    scanf("%d",&a);
    printf("enter ur second number: ");
    scanf("%d",&b);
    printf("-----------------------\n");
    printf("displaying answer.....\n\n");

   switch (oparator)
    {
    case '+':
        printf("%d + %d = %d\n",a,b,a+b);
        break;
        case '-':
        printf("%d - %d = %d\n",a,b,a-b);
        break;
        case '*':
        printf("%d * %d = %d\n",a,b,a*b);
        break;
        case '/':
        printf("%d / %d = %d\n",a,b,a/b);
        break;
    
    default:("error");
        break;
    }

    return 0;
}
