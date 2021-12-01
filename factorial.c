#include <stdio.h>

int factorial(unsigned int n)
{
    printf("\n the value of n is %d", n);
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num = 5, result;
    result = factorial(num);
    printf("\nFactorial of %d is %d", num, result);
    return 0;
}