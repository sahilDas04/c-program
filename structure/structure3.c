#include <stdio.h>
struct student
{
    char name[34];
    char roll;
    char marks;
};
struct student student[3];

int main()
{

    printf("Enter student record\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("enter student's name\n", student[i].name);
        scanf("%s", &student[i].name);
        printf("enter student's roll\n", student[i].roll);
        scanf("%d", &student[i].roll);
        printf("enter student's marks\n", student[i].marks);
        scanf("%d", &student[i].marks);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("displaying imformation: \n\n");
        printf("student's name:%s\n", student[i].name);
        printf("student's roll:%d\n", i, student[i].roll);
        printf("student's marks:%d\n", i, student[i].marks);
    }

    return 0;
}
