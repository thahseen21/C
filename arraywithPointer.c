#include <stdio.h>
int main()
{
    int arr[5] = {5, 10, 3, 4, 5}, *p = arr;

    printf("\n %d %d %u %u %d", *p, ++*p, p, ++p, *p);

    char arr2[5], *p2 = arr2;
    int i;

    for (i = 0; i < 5; i++)
    {
        *p2 = i * i;
        p2++;
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n %d", arr2[i]);
    }

    return 0;
}

//  for (i = 4; i > 0; i--)
//     {
//         *p++ = i * i;
//         p++;
//     }
//     for (i = 0; i < 5; i++)
//     {
//         printf("\n %d", arr[i]);
//     }