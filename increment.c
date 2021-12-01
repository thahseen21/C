#include <stdio.h>
int main()
{
    int a = 21, x = 1, y = 6;
    int b = a++;
    printf("a:%d\n", a);
    printf("b:%d\n", b);
    printf("%d\n", ++x + y);
    printf("x:%d  y:%d", x, y);
    return 0;
}