#include <stdio.h>
int main()
{
    int num = 12345, reverse = 0;
    printf("the given number is %d", num);
    printf("\n reversing the number.......");
    while (num > 0)
    {
        reverse = reverse * 10 + num % 10;
        printf("\nreverse %d", reverse);
        num = num / 10;
        printf("\n number %d", num);
    }
    printf("\n the reverse number of %d is %d", num, reverse);
    return 0;
}