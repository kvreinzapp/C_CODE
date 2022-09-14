// Can I use malloc and scanf in this way?
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *newData = (int *)malloc(sizeof(int));
    scanf("%d", newData);
    printf("%d\n", *newData);
}
// Yeah, it works.
