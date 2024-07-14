#include "card.h"
#include "deck.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void print_hand(deck_t *hand) {
  for (size_t i = 0; i < hand->n_cards; i++) {
    print_card(*(hand->cards[i]));
    printf(" ");
  }
}

int deck_contains(deck_t *d, card_t c) {
  for (size_t i = 0; i < d->n_cards; i++) {
    if (d->cards[i]->value == c.value && d->cards[i]->suit == c.suit) {
      return 1;
    }
  }
  return 0;
}

void shuffle(deck_t *d) {
  for (size_t i = 0; i < d->n_cards; i++) {
    size_t j = i + rand() / (RAND_MAX / (d->n_cards - i) + 1);
    card_t *temp = d->cards[i];
    d->cards[i] = d->cards[j];
    d->cards[j] = temp;
  }
}

void assert_full_deck(deck_t *d) {
  for (unsigned value = 2; value <= VALUE_ACE; value++) {
    for (unsigned suit = 0; suit < NUM_SUITS; suit++) {
      card_t c;
      c.value = value;
      c.suit = suit;
      assert(deck_contains(d, c));
    }
  }
}
