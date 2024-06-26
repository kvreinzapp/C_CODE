#include "cards.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

// Function to validate a card
void assert_card_valid(card_t c) {
  assert(c.value >= 2 && c.value <= VALUE_ACE);
  assert(c.suit >= SPADES && c.suit < NUM_SUITS);
}

// Function to convert hand ranking to a string
const char *ranking_to_string(hand_ranking_t r) {
  switch (r) {
  case STRAIGHT_FLUSH:
    return "STRAIGHT_FLUSH";
  case FOUR_OF_A_KIND:
    return "FOUR_OF_A_KIND";
  case FULL_HOUSE:
    return "FULL_HOUSE";
  case FLUSH:
    return "FLUSH";
  case STRAIGHT:
    return "STRAIGHT";
  case THREE_OF_A_KIND:
    return "THREE_OF_A_KIND";
  case TWO_PAIR:
    return "TWO_PAIR";
  case PAIR:
    return "PAIR";
  case NOTHING:
    return "NOTHING";
  default:
    return "UNKNOWN";
  }
}

// Function to get the textual representation of card value
char value_letter(card_t c) {
  if (c.value >= 2 && c.value <= 9) {
    return '0' + c.value;
  }
  switch (c.value) {
  case 10:
    return '0';
  case VALUE_JACK:
    return 'J';
  case VALUE_QUEEN:
    return 'Q';
  case VALUE_KING:
    return 'K';
  case VALUE_ACE:
    return 'A';
  default:
    return '?'; // Invalid value
  }
}

// Function to get the textual representation of card suit
char suit_letter(card_t c) {
  switch (c.suit) {
  case SPADES:
    return 's';
  case HEARTS:
    return 'h';
  case DIAMONDS:
    return 'd';
  case CLUBS:
    return 'c';
  default:
    return '?'; // Invalid suit
  }
}

// Function to print the card
void print_card(card_t c) { printf("%c%c", value_letter(c), suit_letter(c)); }

// Function to create a card from letters
card_t card_from_letters(char value_let, char suit_let) {
  card_t card;
  switch (value_let) {
  case '2':
    card.value = 2;
    break;
  case '3':
    card.value = 3;
    break;
  case '4':
    card.value = 4;
    break;
  case '5':
    card.value = 5;
    break;
  case '6':
    card.value = 6;
    break;
  case '7':
    card.value = 7;
    break;
  case '8':
    card.value = 8;
    break;
  case '9':
    card.value = 9;
    break;
  case '0':
    card.value = 10;
    break;
  case 'J':
    card.value = VALUE_JACK;
    break;
  case 'Q':
    card.value = VALUE_QUEEN;
    break;
  case 'K':
    card.value = VALUE_KING;
    break;
  case 'A':
    card.value = VALUE_ACE;
    break;
  default:
    fprintf(stderr, "Invalid card value: %c\n", value_let);
    exit(EXIT_FAILURE);
  }

  switch (suit_let) {
  case 's':
    card.suit = SPADES;
    break;
  case 'h':
    card.suit = HEARTS;
    break;
  case 'd':
    card.suit = DIAMONDS;
    break;
  case 'c':
    card.suit = CLUBS;
    break;
  default:
    fprintf(stderr, "Invalid card suit: %c\n", suit_let);
    exit(EXIT_FAILURE);
  }

  assert_card_valid(card);
  return card;
}

// Function to create a card from a number
card_t card_from_num(unsigned c) {
  card_t card;
  if (c >= 52) {
    fprintf(stderr, "Invalid card number: %u\n", c);
    exit(EXIT_FAILURE);
  }

  card.value = (c % 13) + 2;
  card.suit = c / 13;

  return card;
}
