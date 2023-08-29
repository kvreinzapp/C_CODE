#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));

    int randomNum;
    for (size_t i = 0; i < 10; i++)
    {
        randomNum = rand() % 13;
        printf("%d ", randomNum);
    }
}