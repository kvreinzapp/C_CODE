/*
Generalize the  to_binary() function of  Listing   9.8    to a  to_base_n() function that
takes a second argument in the range 2–10. It then should print the number that is its
first argument to the number base given by the second argument. For example,  to_
base_n(129,8)  would display  201 , the base-8 equivalent of  129. Test the function in a
complete program.
*/
#include <stdio.h>
void to_base_n(unsigned long n, int base);
int main(void)
{
    unsigned long input;
    int base;
    printf("Please enter your input and base(2-10): ");
    while (2 == scanf("%lu %d", &input, &base))
    {
        if ((base < 2) || (base > 10))
        {
            printf("Please enter agian, the base should between 2 to 10: \n");
            continue;
        }
        printf("The equivalent of %lu is ", input); 
        to_base_n(input, base);
        printf("\nPlease enter again(q to quit): ");
    }
    printf("Bye\n");
    return 0;
}

void to_base_n(unsigned long n, int base)
{
    int r;
    r = n % base;
    if (n >= base)
    {
        to_base_n(n / base, base);
    }
    printf("%d",r);
}