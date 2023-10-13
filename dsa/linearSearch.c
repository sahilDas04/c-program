#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 10, 2, 4};
    int size = sizeof(arr) / sizeof(int);
    int element = 3;
    int searchIndex = linearSearch(arr, size, element);

    if (searchIndex != -1)
    {
        printf("The element %d is found at index %d\n", element, searchIndex);
    }
    else
    {
        printf("The element %d is not found in the array\n", element);
    }

    return 0;
}
