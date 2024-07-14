#include <stdio.h>

struct card_tag {
  int value;
  int suit;
};
typedef struct card_tag card_t;

struct deck_tag {
  card_t **cards;
  int n;
};
typedef struct deck_tag deck_t;

int main(void) {
  card_t card1 = {2, 0};
  card_t card2 = {4, 1};
  card_t card3 = {11, 2};
  card_t card4 = {8, 3};
}
