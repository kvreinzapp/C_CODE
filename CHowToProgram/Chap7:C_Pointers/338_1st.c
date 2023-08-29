#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#define ROWS 4
#define COLS 13

typedef struct
{
    int order;
    bool picked;
} card;

void init_ordinary(card[][COLS], int rows);
void print_ordinary(card[][COLS], int rows);
void print_new_array(int[], int rows);

int main(void)
{
    // Initial my new card
    card ordinary[ROWS][COLS];
    init_ordinary(ordinary, ROWS);
    print_ordinary(ordinary, ROWS);

    // Initial my display array
    // Do I need to initial it?
    int display[ROWS * COLS];

    // Pick from ordinary and update display array
    srand(time(NULL));
    int randomNum;
    randomNum = 1 + rand() % 52;

    // randomNum=rand()
}

void init_ordinary(card name[][COLS], int rows)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < COLS; j++)
        {
            name[i][j].order = i * COLS + j;
        }
    }
}

void print_new_array(int name[], int rows)
{
}
void print_ordinary(card name[][COLS], int rows)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < COLS; j++)
        {
            printf("%2d ", name[i][j].order);
        }
        puts("");
    }
}