#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    unsigned int seeds;
    puts("Enter a seed:");
    scanf("%u", &seeds);

    srand(seeds);

    for (unsigned int i = 1; i <= 20; ++i)
    {
        printf("%10d", 1 + (rand() % 6));
        if (i % 5 == 0)
        {
            puts("");
        }
    }
}