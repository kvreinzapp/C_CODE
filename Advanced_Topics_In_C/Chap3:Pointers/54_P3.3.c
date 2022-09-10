#include <stdio.h>
int main(void)
{
    void test(int val[], int max);
    int j, list[5];

    for (j = 0; j < 5; j++)
    {
        list[j] = j;
    }
    test(list, 5);
    for (j = 0; j < 5; j++)
    {
        printf("%d ", list[j]);
    }
    printf("\n");
}

void test(int val[], int max)
{
    int j;
    for (j = 0; j < max; j++)
    {
        val[j] += 25;
    }
}