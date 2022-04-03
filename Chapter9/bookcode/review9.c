#include <stdio.h>
#include <ctype.h>
#define STARS "**********************************"
int get_choice(void);

int main(void)
{
    int choice;
    choice = get_choice();
}

// menu and get the numbers
int get_choice(void)
{
    int input, status;
    char ch;

    printf("Please choose one of the following: \n");
    printf("1) copy files        2) move files \n");
    printf("3) remove files      4) quit       \n");
    printf("Enter the number of your choice: ");
    while ((status = scanf("%d", &input)) != 1 || (input < 1 || input > 4))
    {
        if (status != 1)
        {
            while ((ch = getchar()) != '\n')
            {
                putchar(ch);
            }
            printf(" is not a integer. \nTry again\n");
        }
        else
            printf("%d is not integer from 1 to 5. \nTry again\n", input);
    }
    return input;
}


