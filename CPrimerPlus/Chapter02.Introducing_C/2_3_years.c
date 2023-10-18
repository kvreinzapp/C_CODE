//2-3--B:convert years to days
#include <stdio.h>
int main(void)
{
    int years;
    int days;

    years=22;
    days=0;
    days=years*365;
    printf("i have been living for %d years, which equals to %d days.\n",years,days);

    return 0;
}