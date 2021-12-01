#include <stdio.h>

union sample
{
    int phoneNumber;
    char email[20];
};

int main()
{

    union sample u;
    char ch;

    printf("\n Enter E for email and P for Phone Number:");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'E' | 'e':
        printf("\n Please enter your email Id :");
        scanf("%s", &u.email);
        break;
    case 'P' | 'p':
        printf("\n Please enter your phone number :");
        scanf("%d", &u.phoneNumber);
        break;
    default:
        printf("\nPlease enter a valid opiton....\n");
        break;
    }
    printf("\n the size of the union is %ld", sizeof(u));

    return 0;
}