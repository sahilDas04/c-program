#include <stdio.h>

int main()
{
    // 1D array
    int marks[4];
for (int i = 0; i < 4; i++)
{
    printf("the value of %d element on the array\n", i);
    scanf("%d", &marks[i]);
}
    for (int i = 0; i < 4; i++)
    {
        printf("the value of the %d element of the array is %d\n", i, marks[i]);
    }
    


    return 0;
}
