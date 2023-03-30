#include <stdio.h>
struct employee
{
    char name[34];
    int id;
};
struct employee employee[2];

int main()
{
    printf("enter employee imformation:\n\n");
    for (int i = 0; i < 2; i++)
    {
        printf("enter employee's name:\n", employee[i].name);
        scanf("%s", &employee[i].name);
        printf("enter employee's id:\n", employee[i].id);
        scanf("%d", &employee[i].id);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("displaying imformation\n\n");
        printf("employee's name:%s\n", employee[i].name);
        printf("enter employee's id:%d\n", employee[i].id);
    }
    return 0;
}
