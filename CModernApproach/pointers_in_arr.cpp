#include <stdio.h>
void change(char *&p)
{
    ;
}
int main(void)
{
    char *arr[20];
    arr[0] = NULL;
    change(arr[0]);
}

// 1 *arr[]!=arr[]
// 2 arr!=arr[0]
// 3 .can not pass directlly