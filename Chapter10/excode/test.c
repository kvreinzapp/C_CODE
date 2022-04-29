#include <stdio.h>
int main(void)
{
    int label = 1;
    if (label ? 1 < 0 : 1 > 0)
        printf("hello\n");
}