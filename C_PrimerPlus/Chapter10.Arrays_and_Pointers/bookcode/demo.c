#include <stdio.h>
int main(void)
{
    int array[] = {43, 32, 32, 43};
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("%p\n", &array[2]);
    printf("%p\n", &array[3]);
}