/*Write a program that accepts a positive integer as input and then displays all the prime
numbers smaller than or equal to that number.
*/
#include <stdio.h>
int main(void)
{
    int input;
    int counter = 0;
    int limit;
    printf("Enter the limit here(<=0 to quit):");

    scanf("%d", &limit);
    while (limit > 0)
    {
        printf("Prime:");

        for (input = 1; input <= limit; input++)
        {
            for (int i = 1; i <= input; i++)
            {
                if ((input % i) == 0)
                    counter++;
            }
            if (counter > 2)
                ; // printf("%d is a not prime.\n", input);
            else
                printf(" %d", input);
            counter = 0;
        }
        printf("\nEnter a limit again( <=0 to quit): ");
        scanf("%d", &limit);
    }

    return 0;
}
