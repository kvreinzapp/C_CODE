#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "mytool.h"

#define ROWS 3
#define COLS 5

typedef struct
{
    int order;
    bool picked;
} card;

void init_ordinary(card[], int rows);
void print_ordinary(card[], int rows);
bool check_picked(card[], int rows);

int main(void)
{
    // Initial my new card
    card ordinary[ROWS * COLS];
    init_ordinary(ordinary, ROWS);
    print_ordinary(ordinary, ROWS * COLS);

    // Initial my display array
    // Do I need to initial it?
    int display[ROWS * COLS];
    // print_1dArray(display, ROWS * COLS);

    // Pick from ordinary and update display array
    srand(time(NULL));
    int randomNum;
    size_t i = 0;
    // pick push until empty
    while (!check_picked(ordinary, ROWS * COLS))
    {
        randomNum = rand() % (ROWS * COLS);
        if (0 == ordinary[randomNum].picked)
        {
            display[i] = ordinary[randomNum].order;
            ordinary[randomNum].picked = 1;
            i++;
        }
    }

    // Print my display
    print_1dArray(display, ROWS * COLS);
    bubble_sort(display, ROWS * COLS);
    print_1dArray(display, ROWS * COLS);
}

void init_ordinary(card name[], int rows)
{
    for (size_t i = 0; i < ROWS * COLS; i++)
    {
        name[i].order = i;
        name[i].picked = 0;
    }
}

void print_ordinary(card name[], int rows)
{
    for (size_t i = 0; i < ROWS * COLS; i++)
    {
        printf("%2d ", name[i].order);
    }
    puts("");
}

bool check_picked(card ar[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (0 == ar[i].picked)
        {
            return false;
        }
    }
    return true;
}