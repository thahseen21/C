#include <stdio.h>
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter %dth value:", i);
        scanf("%d", &arr[i]);
    }
    printf("Input is over...");
    printf("The number you have entered are....\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nThe %dth number is:%d", i, arr[i]);
    }
    return 0;
}