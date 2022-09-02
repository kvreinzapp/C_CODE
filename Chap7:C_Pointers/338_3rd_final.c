#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "mytool.h"

#define ROWS 4
#define COLS 13

typedef struct
{
    int order;
    char *suit;
    char *number;
    bool picked;

} card;

void init_ordinary(card[], int rows);
void print_ordinary(card[], int rows);
bool check_picked(card[], int rows);
void map_to_card(card *ar, int n);

int main(void)
{
    // Initial my new card
    card ordinary[ROWS * COLS];
    init_ordinary(ordinary, ROWS);
    map_to_card(ordinary, ROWS * COLS);
    print_ordinary(ordinary, ROWS * COLS);

    // Initial my display array    // Do I need to initial it?
    card display[ROWS * COLS];

    // Pick from ordinary and update display array
    void pick_and_push(card * ordinary, card * display, int n);
    pick_and_push(ordinary, display, ROWS * COLS);

    // Print my display
    print_ordinary(display, ROWS * COLS);
}

void pick_and_push(card *ordinary, card *display, int n)
{
    srand(time(NULL));
    int randomNum;
    size_t i = 0;
    // pick push until empty
    while (!check_picked(ordinary, ROWS * COLS))
    {
        randomNum = rand() % (ROWS * COLS);
        if (0 == ordinary[randomNum].picked)
        {
            display[i].order = ordinary[randomNum].order;
            display[i].suit = ordinary[randomNum].suit;
            display[i].number = ordinary[randomNum].number;
            ordinary[randomNum].picked = 1;
            i++;
        }
    }
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
        printf("%-2s-%-5s ", name[i].suit, name[i].number);
        if (0 == (i + 1) % 13)
        {
            puts("");
        }
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

void map_to_card(card *name, int n)
{
    char *map_to_num(int num);
    for (size_t i = 0; i < n; i++)
    {
        switch (name[i].order / 13)
        {
        case 0:
            // name[i].suit = "Club";
            name[i].suit = "C";
            name[i].number = map_to_num(name[i].order % 13);
            break;
        case 1:
            // name[i].suit = "Diamond";
            name[i].suit = "D";
            name[i].number = map_to_num(name[i].order % 13);
            break;
        case 2:
            // name[i].suit = "Heart";
            name[i].suit = "H";
            name[i].number = map_to_num(name[i].order % 13);
            break;
        case 3:
            // name[i].suit = "Spade";
            name[i].suit = "S";
            name[i].number = map_to_num(name[i].order % 13);
            break;
        default:
            break;
        }
    }
}
char *map_to_num(int num)
{
    char *number;
    switch (num)
    {
    case 0:
        number = "Ace";
        break;
    case 1:
        number = "2";
        break;
    case 2:
        number = "3";
        break;
    case 3:
        number = "4";
        break;
    case 4:
        number = "5";
        break;
    case 5:
        number = "6";
        break;
    case 6:
        number = "7";
        break;
    case 7:
        number = "8";
        break;
    case 8:
        number = "9";
        break;
    case 9:
        number = "10";
        break;
    case 10:
        number = "Joker";
        break;
    case 11:
        number = "Queen";
        break;
    case 12:
        number = "King";
        break;

    default:
        break;
    }
    return number;
}