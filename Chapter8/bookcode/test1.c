#include<stdio.h>

char get_coice(void);

int main(void)
{
    char ch;
    int input;

    printf("Enter the letter of your choice:\n");
    printf("a. advice               b. bell\n");
    printf("c.  count               q. quit\n");
    scanf("%c", &ch);
    while (ch != 'q')
    {

        printf("Enter the letter of your choice:\n");
        printf("a. advice               b. bell\n");
        printf("c.  count               q. quit\n");
        scanf("%c", &ch);
        switch (ch)
        {
        case 'a':
            printf("Buy low, sell high.\n");
            break;
        case 'b':
            printf("\a");
            break;
        case 'c':
            printf("Count how far? Enter an integer:");
            scanf("%d", &input);
            break;

        default:
            printf("%c is not an integer.\n",ch);
            printf("Please enter an integer value, such as 25, -178, or 3:");
            break;
        }
    }


    return 0;
}

char get_coice(void)
{
    int ch;
    printf("Enter the letter of your choice:\n");
    printf("a. advice               b. bell\n");
    printf("c.  count               q. quit\n");
    ch=getchar();
    while ((ch < 'a') || (ch > 'c') && (ch != 'q'))
    {
        printf("Please respond with a, b, c, or q.\n");
    }
}