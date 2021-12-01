#include <stdio.h>


int printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d , ", arr[i]);
    printf("\n");
    return 0;
}

int insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        printArray(arr,n);
    }
    return 0;
}


int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    insertionSort(arr, sizeof(arr) / sizeof(arr[0]));
    printArray(arr, sizeof(arr) / sizeof(arr[0]));
}