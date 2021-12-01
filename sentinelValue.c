#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    while (age != -1)
    {
        printf("enter your age");
        scanf("%d", &age);
    }
}