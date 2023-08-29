#include <stdio.h>
int main(void)
{
    int days, mons, years;
    printf("Enter a date (mm/dd/yyyy) : __________\b\b\b\b\b\b\b\b\b\b");
    scanf("%d/%d/%d", &mons, &days, &years);
    printf("you entered the date : %d%d%d", years, mons, days);
}