#include "cards.h"

int main(void) {
  card_t card1 = card_from_letters('0', 's');
  assert_card_valid(card1);
  card_t card2 = card_from_letters('0', '?');
  assert_card_valid(card2);
  card_t card3 = card_from_letters('A', 's');
  assert_card_valid(card3);
  card_t card4 = card_from_letters('A', 'n');
  assert_card_valid(card4);
}
