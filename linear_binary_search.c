#include <stdio.h>
int linearsearch(int arr[], int size, int element)
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
// binary search
int binarysearch(int arr[], int size, int element)
{
    int mid, high, low;
    low = 0;
    high = size - 1;
    // start searching
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // searching ends
    return -1;
}

int main()
{
    // unsorted array for linear search
    // int arr[] = {5, 45, 357, 23, 456};
    // int size = sizeof(arr) / sizeof(int);

    // sorted arry for binary search
    int arr[] = {5, 45, 357, 455, 456};
    int size = sizeof(arr) / sizeof(int);

    int element = 456;
    int searchindex = binarysearch(arr, size, element);
    printf("The element %d found at index %d \n", element, searchindex);
    return 0;
}
