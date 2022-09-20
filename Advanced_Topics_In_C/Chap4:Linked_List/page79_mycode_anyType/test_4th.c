// Q: But if you define it out, it gonna be different
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    int *newData = (int *)malloc(sizeof(int));
    while (i-- > 0)
    {
        printf("%p\n", newData);
        int *newData = (int *)malloc(sizeof(int));
    }
}
/*  This time ,it's gonna be all same   */