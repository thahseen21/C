#include <stdio.h>
int main()
{
    int integer = 12345;
    float floating = 1234.1234;
    printf("floating %3.3f\n", floating);
    double doubleValue = 123456.123456;
    unsigned long long int longInteger = 1234567890123456789;
    unsigned int unsignInteger = 123456789;
    printf("%llu \n", longInteger);
    printf("%u\n", unsignInteger);
    printf("%10u\n", unsignInteger);
    printf("%*u\n", 10, unsignInteger);
    printf("%x\n", unsignInteger);
    printf("%X\n", unsignInteger);
    return 0;
}