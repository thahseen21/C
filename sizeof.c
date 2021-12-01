#include <stdio.h>
int main()
{
    printf("%ld\n", sizeof(long int));
    printf("%lu\n", sizeof(unsigned long int));
    printf("%lu\n", sizeof("thahseen mohammed")); // if d is used  warning: format specifies type 'int' but the argument has type 'unsigned long'
    return 0;
}