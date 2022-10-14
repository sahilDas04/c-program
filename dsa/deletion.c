#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int shortedDeletion(int arr[], int size, int capasity, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7, capasity = 100, index = 1;
    display(arr, size);
    shortedDeletion(arr, size, capasity, index);
    size -= 1;
    display(arr, size);
    return 0;
}
