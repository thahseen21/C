#include <stdio.h>
int main()
{
    int a = 0;
    printf("hello");
loop:
    if (a < 2)
    {
        printf("hello there");
        a++;
    }
    goto loop;
}