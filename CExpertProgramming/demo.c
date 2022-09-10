#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("%d\n", 0x7FFFFFFF);
    printf("%ld\n", sizeof(int));
    printf("%d\n", INT_MAX);
    printf("%x\n", INT_MAX);
}