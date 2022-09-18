#include <stdio.h>

int main()
{
    // 2D array
    int marks[2][4] = {{2, 3, 4, 5},
                       {6, 7, 8, 9}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            // printf("the value of the %d, %d element of the array is %d\n", i,j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
