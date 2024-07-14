#include "deck.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
void print_hand(deck_t *hand) {
  for (size_t i = 0; i < hand->n_cards; i++) {
    print_card(*(*hand->cards + i));
  }
}

// int deck_contains(deck_t *d, card_t c) {
//   for (size_t i = 0; i < d->n_cards; i++) {
//     card_t *card1 = d->cards[i];
//     card_t *card2 = *d->cards + i;
//     printf("Checking card1: %d of %d against %d of %d\n", card1->value,
//            card1->suit, c.value, c.suit);
//     printf("Checking card2: %d of %d against %d of %d\n", card2->value,
//            card2->suit, c.value, c.suit);
//     if ((*(*(d->cards) + i)).value == c.value &&
//         (*(*(d->cards) + i)).suit ==
//             c.suit) { // -> has the higher precedence than *
//       return 1;
//     }
//   }
//   return 0;
// }

int deck_contains(deck_t *d, card_t c) {
  for (size_t i = 0; i < d->n_cards; i++) {
    if ((**(d->cards + i)).value == c.value &&
        (*(d->cards + i))->suit ==
            c.suit) { // -> has the higher precedence than *
      return 1;
    }
  }
  return 0;
}

void exchange(deck_t *d, int n, int m) {
  if (n < 0 || n > d->n_cards - 1) {
    printf("%d is out of range from 0 to %zu", n, d->n_cards - 1);
  }
  if (m < 0 || m > d->n_cards - 1) {
    printf("%d is out of range from 0 to %zu", m, d->n_cards - 1);
  }
  card_t *temp = *(d->cards + n);
  *(d->cards + n) = *(d->cards + m);
  *(d->cards + m) = temp;
}

void shuffle(deck_t *d) {
  for (size_t i = 0; i < d->n_cards - 1; i++) {
    exchange(d, random() % (d->n_cards), random() % (d->n_cards));
  }
}

void assert_full_deck(deck_t *d) {
  card_t compare;
  int record[4][13];
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 2; j < 14; j++) {
      compare.suit = i;
      compare.value = j;
      if (1 == deck_contains(d, compare)) {
        record[i][j] = 1;
      } else {
        puts("some card is not contained");
        return;
      }
      if (record[i][j] > 1) {
        puts("repetive card");
        return;
      }
    }
  }
  return;
}
