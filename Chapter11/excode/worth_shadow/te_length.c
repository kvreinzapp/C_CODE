#include <stdio.h>
int main(void)
{
    int i = 0;
    char source[5];
    for (; i < 5; i++)
    {
        source[i] = 'a';
    }
    printf("The value of i is %d now\n", i);
    source[i] = 'p';

    return 0;
}