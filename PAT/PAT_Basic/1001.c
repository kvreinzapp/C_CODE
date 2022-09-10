#include <stdio.h>
int main(void)
{
    int input;
    int counter = 0;
    scanf("%d", &input);
    while (input != 1)
    {
        if (input % 2 == 0)
        {
            input /= 2;
        }
        else if (input % 2 != 0)
        {
            input = (3 * input + 1) / 2;
        }
        counter++;
    }
    printf("%d", counter);

    return 0;
}
