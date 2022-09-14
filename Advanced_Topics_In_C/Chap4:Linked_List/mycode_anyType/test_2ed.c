// Q: Are they the same adress?
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *newData = (int *)malloc(sizeof(int));
    printf("%p", newData);
    int *newData = (int *)malloc(sizeof(int));
    printf("%p", newData);
}
// A: No, redefinition
