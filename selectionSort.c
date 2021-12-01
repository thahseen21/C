#include <stdio.h>

void swap(int arr[], int small, int j)
{
    printf("\n\n swapping %d and %d \n", arr[small], arr[j]);
    int temp = arr[small];
    arr[small] = arr[j];
    arr[j] = temp;
}

void selectionSort(int arr[], int size)
{
    int j = 0, i = 0, small;
    while (j < size - 1)
    {
        small = j;
        for (i = 0; i < size; i++)
        {
            printf("  %d  ", arr[i]);
        }

        for (i = j; i < size; i++)
        {
            if (arr[small] >= arr[i])
            {
                small = i;
            }
        }
        swap(arr, small, j);
        j++;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("  %d  ", arr[i]);
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    printf("\n");
    printArray(arr, size);
    printf("\n");
    return 0;
}