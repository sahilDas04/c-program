#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = low + ((high - low) / 2);

        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {1, 3, 5, 7, 10,24, 200};
    int size = sizeof(arr) / sizeof(int);
    int element = 24;

    int searchIndex = binarySearch(arr, size, element);
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
