// madhyamik marks
#include <stdio.h>
#include <string.h>
struct student
{
    char name[34];
    int roll;
    int marks;
};
struct student s1, s2, s3;

int main()
{
    strcpy(s1.name, "pratyush");
    s1.roll = 1;
    s1.marks = 588;
    strcpy(s2.name, "angshu");
    s2.roll = 3;
    s2.marks = 570;
    strcpy(s3.name, "nilay");
    s3.roll = 6;
    s3.marks = 640;
    printf("s1's name is %s\n", s1.name);
     printf("s1's roll is %d\n", s1.roll);
      printf("s1's marks is %d\n", s1.marks);
       printf("s2's name is %s\n", s2.name);
        printf("s2's roll is %d\n", s2.roll);
       printf("s2's marks is %d\n", s2.marks);
      printf("s3's name is %s\n", s3.name);
     printf("s3's roll is %d\n", s3.roll);
    printf("s3's marks is %d\n", s3.marks);

    return 0;
}
