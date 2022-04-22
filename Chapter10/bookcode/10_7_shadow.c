#include <stdio.h>
#define MONTHS 12 // number of months in a year
#define YEARS 5   // number of years of data
int main(void)
{
    // initializing rainfall data for 2010 - 2014
    const float rain[YEARS][MONTHS] =
        {
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
            {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
            {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
            {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};
    int year, month;
    float subtot, total;

    printf(" YEAR    RAINFALL  (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    { // for each year, sum the rainfall
        for (month = 0, subtot = 0; month < MONTHS; month++)
        {
            subtot += rain[year][month];
        }
        printf("Year %d: %g\n", year, subtot);
        total += subtot;
    }
    printf("Average for each year: %g\n", total / YEARS);

    printf("************************\n");
    printf(" MONTH    RAINFALL  (inches)\n");
    for (month = 0, total = 0; month < MONTHS; month++)
    { // for each year, sum the rainfall
        for (year = 0, subtot = 0; year < YEARS; year++)
        {
            subtot += rain[year][month];
        }
        printf("Month %d: %g\n", month, subtot);
        total += subtot;
    }
    printf("Average for each month: %g\n", total / (YEARS * MONTHS));
    return 0;
}