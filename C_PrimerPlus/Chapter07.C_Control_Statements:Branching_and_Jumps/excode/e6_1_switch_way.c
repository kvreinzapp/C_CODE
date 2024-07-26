#include <stdio.h>
int main(void)
{
    int counter = 0;
    int label = 0;
    char ch;

    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;
        switch (ch)
        {
        case 'e':
            label = 1;
            break;

        case 'i':
            if (1 == label)
            {
                counter++;
                label = 0;
            }
            break;

        default:
            label = 0;
            break;
        }
    }
    printf("%d \'ei\' occurs.\n",counter);
    return 0;
}
