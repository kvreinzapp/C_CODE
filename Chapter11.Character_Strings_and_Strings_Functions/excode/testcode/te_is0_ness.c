#include <stdio.h>
#include <string.h>

int main(void)
{
    const char ar[5] = {'a', 'a', '\0', 'p', 'p'};
    printf("%s\n", ar);
    puts(ar);
    return 0;
}