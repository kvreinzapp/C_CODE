#include <stdio.h>
void exchange();

int main(void)
{
    int x, y;
    x=2;
    y=5;
    printf("x=%d, y=%d\n",x,y);
    exchange(&x, &y);
    printf("Now, x=%d, y=%d\n", x, y);

    return 0;
}

void exchange(int *u, int *v)
{
    int temp;
    temp=*u;
    *u=*v;
    *v=temp;
}