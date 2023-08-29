#include <stdio.h>
#define MONTHS 12 // number of months in a year
#define YEARS 5   // number of years of data
float sum_rain(int rows, int cols, float s[rows][cols], int label);
int main(void)
{
    // initializing rainfall data for 2010 - 2014
    float rain[YEARS][MONTHS] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};
    int year, month;
    float subtot, total;

    printf(" YEAR    RAINFALL  (inches)\n");
    total = sum_rain(YEARS, MONTHS, rain, 1);
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);

    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf(" Nov  Dec\n");

    sum_rain(YEARS, MONTHS, rain, 0);
    printf("\n");

    return 0;
}

// if label==1,return the total, print the total of every year
// if label==0,return nothing , print the average of each month
float sum_rain(int rows, int cols, float s[rows][cols], int label)
{
    float subtot, total;

    int year = 0;
    int y, m;

    if (label == 1)
    {
        for (y = 0; y < YEARS; y++)
        {
            for (m = 0, subtot = 0; m < MONTHS; m++) // subtot =0 must exsist here
            {
                subtot += s[y][m];
            }
            printf("%5d %15.1f\n", 2010 + year++, subtot);
            total += subtot;
        }
        return total;
    }
    else if (label == 0)
    {
        for (m = 0; m < MONTHS; m++)
        {
            for (y = 0, subtot = 0; y < YEARS; y++)
            {
                subtot += s[y][m];
            }
            printf("%4.1f ", subtot / YEARS);
        }
        // return total;
    }
}