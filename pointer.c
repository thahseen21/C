#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 3;
    int *ptr = &i;
    printf("\n Address of i = %u  %u %u", &i, ptr, *ptr);
    // printf("\n Address of i = %d , %d", i, ++(*ptr));

    // int *ptr2;
    // ptr2 = (int *)malloc(5 * sizeof(int));

    // printf("\nvalue of i = %d", i);
    // printf("\n Address of i = %u", &i);
    // printf("\n value of pointer = %u", ptr);
    // printf("\n Address of i = %d", *ptr);
    // printf("\n Address of ptr2 = %d", ptr2);
    // printf("\n %d  %d", i, ++*ptr);

    // int a[] = {1, 2, 3, 4, 5, 6};
    // int *aptr = a + 2;
    // printf("\n %d %d", *aptr, --*aptr);

    return 0;
}