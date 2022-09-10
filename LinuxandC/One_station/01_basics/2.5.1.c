#include <stdio.h>
int main(void)
{
    int x, n;
    scanf("%d%d", &x, &n);
    int res;
    res = (int)(x + 0.5) / n;
    printf("%d", res);
}