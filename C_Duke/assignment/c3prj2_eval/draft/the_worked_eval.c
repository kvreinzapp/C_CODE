#include "eval.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int card_ptr_comp(const void *vp1, const void *vp2) {
  const card_t *const *cp1 = vp1;
  const card_t *const *cp2 = vp2;
  if ((*cp1)->value != (*cp2)->value) {
    return (*cp2)->value - (*cp1)->value;
  }

  return (*cp2)->suit - (*cp1)->suit;
}

suit_t flush_suit(deck_t *hand) {
  int numClub = 0;
  int numDiamond = 0;
  int numHeart = 0;
  int numSpade = 0;

  for (size_t i = 0; i < hand->n_cards; i++) {
    switch (hand->cards[i]->suit) {
    case SPADES:
      numSpade++;
      break;
    case HEARTS:
      numHeart++;
      break;
    case DIAMONDS:
      numDiamond++;
      break;
    default:
      numClub++;
    }
  }

  if (numSpade >= 5) {
    return SPADES;
  }
  if (numHeart >= 5) {
    return HEARTS;
  }
  if (numDiamond >= 5) {
    return DIAMONDS;
  }
  if (numClub >= 5) {
    return CLUBS;
  }
  return NUM_SUITS;
}

unsigned get_largest_element(unsigned *arr, size_t n) {
  if (n == 0) {
    return 0;
  }
  unsigned ans = arr[0];
  for (size_t i = 1; i < n; i++) {
    if (arr[i] > ans) {
      ans = arr[i];
    }
  }
  return ans;
}

size_t get_match_index(unsigned *match_counts, size_t n, unsigned n_of_akind) {

  for (size_t i = 0; i < n; i++) {
    if (match_counts[i] == n_of_akind) {
      return i;
    }
  }
  assert(1 == 2);
}

ssize_t find_secondary_pair(deck_t *hand, unsigned *match_counts,
                            size_t match_idx) {

  for (size_t i = 0; i < hand->n_cards; i++) {
    if (match_counts[i] > 1) {
      if (hand->cards[i]->value != hand->cards[match_idx]->value) {
        return i;
      }
    }
  }
  return -1;
}

int is_ace_low_straight_at_five(deck_t *hand, size_t index, suit_t fs) {
  int straightTally = 2;
  int currentCardValue = 5;
  for (size_t i = index + 1; i < hand->n_cards; i++) {
    if (straightTally == 5) {
      return -1;
    }

    if (hand->cards[i]->value == currentCardValue) {
      continue;
    }

    if (hand->cards[i]->value == currentCardValue - 1) {
      if (fs == NUM_SUITS || hand->cards[i]->suit == fs) {
        straightTally++;
        currentCardValue--;
      } else {
        continue;
      }
    } else {
      break;
    }
  }
  if (straightTally == 5) {
    return -1;
  }
  return 0;
}

int is_ace_low_straight_at(deck_t *hand, size_t index, suit_t fs) {
  int currentCardValue = hand->cards[index]->value;
  if (currentCardValue == 5) {
    return is_ace_low_straight_at_five(hand, index, fs);
  }

  if (currentCardValue == VALUE_ACE) {
    for (size_t i = index + 1; i < hand->n_cards; i++) {

      if (hand->cards[i]->value == currentCardValue) {
        continue;
      }

      if (hand->cards[i]->value == 5) {
        return is_ace_low_straight_at_five(hand, i, fs);
      }
    }
  }

  return 0;
}

int is_straight_at(deck_t *hand, size_t index, suit_t fs) {
  if (hand->cards[index]->suit != fs && fs != NUM_SUITS) {
    return 0;
  }
  int currentCardValue = hand->cards[index]->value;
  if (currentCardValue < 5) {
    return 0;
  }
  if (currentCardValue == 5) {
    if (hand->cards[0]->value != 14) {
      return 0;
    } else {
      return is_ace_low_straight_at(hand, index, fs);
    }
  }

  int straightTally = 1;
  for (size_t i = index + 1; i < hand->n_cards; i++) {
    if (straightTally == 5) {
      return 1;
    }

    if (hand->cards[i]->value == currentCardValue) {
      continue;
    }

    if (hand->cards[i]->value == currentCardValue - 1) {
      if (fs == NUM_SUITS || hand->cards[i]->suit == fs) {
        straightTally++;
        currentCardValue--;
      } else {
        continue;
      }
    } else {
      break;
    }
  }
  if (straightTally == 5) {
    return 1;
  }

  if (hand->cards[index]->value == VALUE_ACE) {
    return is_ace_low_straight_at(hand, index, fs);
  } else {
    return 0;
  }
}

hand_eval_t build_hand_from_match(deck_t *hand, unsigned n, hand_ranking_t what,
                                  size_t idx) {

  hand_eval_t ans;
  ans.ranking = what;
  for (int i = 0; i < n; i++) {
    ans.cards[i] = hand->cards[idx + i];
  }

  if (idx == 0) {
    for (int i = n; i < 5; i++) {
      ans.cards[i] = hand->cards[i];
    }
  } else if (idx >= 5 - n) {
    for (int i = 0; i < 5 - n; i++) {
      ans.cards[n + i] = hand->cards[i];
    }
  } else {
    for (int i = 0; i < idx; i++) {
      ans.cards[n + i] = hand->cards[i];
    }
    for (int i = idx + n; i < 5; i++) {
      ans.cards[i] = hand->cards[i];
    }
  }
  return ans;
}

int compare_hands(deck_t *hand1, deck_t *hand2) {

  qsort(hand1->cards, hand1->n_cards, sizeof(card_t), card_ptr_comp);
  qsort(hand2->cards, hand2->n_cards, sizeof(card_t), card_ptr_comp);
  hand_eval_t ht1 = evaluate_hand(hand1);
  hand_eval_t ht2 = evaluate_hand(hand2);

  if (ht1.ranking != ht2.ranking) {
    return ht2.ranking - ht1.ranking;
  }

  for (int i = 0; i < 5; i++) {
    if (ht1.cards[i]->value == ht2.cards[i]->value) {
      continue;
    } else {
      return ht1.cards[i]->value - ht2.cards[i]->value;
    }
  }
  return 0;
}
