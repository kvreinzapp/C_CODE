//return the largest
#include<stdio.h>
int back_3(int a, int b, int c);
int main (void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("The biggest number is %d.\n",back_3(a,b,c));

    return 0;
}

int back_3(int a, int b, int c)
{
    int biggest;
    if (a>b)
        biggest=a;
        else
        biggest=b;
    if (biggest<c)
        biggest=c;

    return biggest;
}
//another solution : still learnful
int largest(int a, int b, int c)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}