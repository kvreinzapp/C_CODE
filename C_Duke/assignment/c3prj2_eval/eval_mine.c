#include "eval.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int card_ptr_comp(const void *vp1, const void *vp2) {
  const card_t *const *cp1 = vp1;
  const card_t *const *cp2 = vp2;
  if ((*cp1)->value == (*cp2)->value) {
    return (*cp1)->suit - (*cp2)->suit;
  }
  return -((*cp1)->value - (*cp2)->value);
}

suit_t flush_suit(deck_t *hand) {
  int spadeCounter = 0;
  int heartCounter = 0;
  int diamondCounter = 0;
  int clubCounter = 0;
  for (size_t i = 0; i < hand->n_cards; i++) {
    switch (hand->cards[i]->suit) { // or (*(hand->cards+i))->suit
    case SPADES:
      spadeCounter++;
      break;
    case HEARTS:
      heartCounter++;
      break;
    case DIAMONDS:
      diamondCounter++;
      break;
    case CLUBS:
      clubCounter++;
      break;
    default:
      puts("invalid suit");
    }
  }
  if (spadeCounter >= 5) {
    return SPADES;
  } else if (heartCounter >= 5) {
    return HEARTS;
  } else if (diamondCounter >= 5) {
    return DIAMONDS;
  } else if (clubCounter >= 5) {
    return CLUBS;
  } else {
    return NUM_SUITS;
  }
}

unsigned get_largest_element(unsigned *arr, size_t n) {
  unsigned max = arr[0];
  for (size_t i = 1; i < n; i++) {
    if (arr[i] > max)
      max = arr[i];
  }
  return max;
}

size_t get_match_index(unsigned *match_counts, size_t n, unsigned n_of_akind) {
  int nKindCounter = 0;
  for (size_t i = 0; i < n - 1; i++) {
    if (match_counts[i] == match_counts[i + 1]) {
      nKindCounter++;
      if (nKindCounter == n_of_akind - 1) {
        return i - (n_of_akind - 2);
      }
    }
  }
  return 0;
}
ssize_t find_secondary_pair(deck_t *hand, unsigned *match_counts,
                            size_t match_idx) {

  return -1;
}
int no_pair_and_staright(deck_t *hand, size_t start, size_t end) {
  assert(start < end);
  for (size_t i = start; i < end; i++) {
    if (hand->cards[i]->value != hand->cards[i + 1]->value + 1) {
      return 0;
    }
  }
  return 1;
}
int no_pair_and_flush(deck_t *hand, size_t start, size_t end, suit_t fs) {
  assert(start < end);
  for (size_t i = start; i <= end; i++) {
    if (hand->cards[i]->suit != fs) {
      return 0;
    }
  }
  return 1;
}

int find_pair_between(deck_t *hand, size_t start, size_t end) {
  int pairIndex = -1;
  for (size_t i = start; i < end; i++) {
    if (hand->cards[i]->value == hand->cards[i + 1]->value) {
      pairIndex = i;
    }
  }
  return pairIndex;
}
int at_least_in_one_pair(deck_t *hand, size_t position, suit_t fs) {
  if (hand->cards[position]->suit == fs ||
      hand->cards[position + 1]->suit == fs) {
    return 1;
  }
  return 0;
}
/// int flush_between(deck_t *hand, size_t start, size_t end, suit_t fs) {
///   if (fs == NUM_SUITS) {
///     return 0;
///   } else {
///     for (size_t i = start; i <= end; i++) {
///       if (hand->cards[i]->suit != fs) {
///         return 0;
///       }
///     }
///     return 1;
///   }
/// }

int is_n_length_straight_at(deck_t *hand, size_t index, suit_t fs, int n) {
  if (n == 5) {
    if (fs == NUM_SUITS) {
      return no_pair_and_staright(hand, index, index + n - 1);
    } else {
      return no_pair_and_staright(hand, index, index + n - 1) &&
             no_pair_and_flush(hand, index, index + n - 1, fs);
    }
  } else if (n == 6) {
    int pairIndex = find_pair_between(hand, index, index + n - 1);
    assert(pairIndex != -1);
    if (fs == NUM_SUITS) {
      if (no_pair_and_staright(hand, index, pairIndex) &&
          no_pair_and_staright(hand, pairIndex + 1, index + n - 1)) {
        return 1;
      } else {
        return 0;
      }
    } else {
      if (no_pair_and_staright(hand, index, pairIndex) &&
          no_pair_and_flush(hand, index, pairIndex, fs) &&
          no_pair_and_staright(hand, pairIndex + 1, index + n - 1) &&
          no_pair_and_flush(hand, pairIndex + 2, index + n - 1, fs)) {
        return 1;
      } else {
        return 0;
      }
    }
  } else if (n == 7) {
    int pairIndex1 = find_pair_between(hand, index, index + n - 1);
    int pairIndex2 = find_pair_between(hand, pairIndex1 + 2, index + n - 1);
    assert(pairIndex1 != -1 && pairIndex2 != -1);
    if (fs == NUM_SUITS) {
      if (no_pair_and_staright(hand, index, pairIndex1) &&
          no_pair_and_staright(hand, pairIndex1 + 1, pairIndex2) &&
          no_pair_and_staright(hand, pairIndex2 + 1, index + n - 1)) {
        return 1;
      } else {
        return 0;
      }
    } else {
      if () {
        return 1;
      } else {
        return 0;
      }
    }
  }
}

int is_n_length_flushStaight_at(deck_t *hand, size_t index, suit_t fs, int n) {}

int is_ace_low_staight_at(deck_t *hand, size_t index) {
  if (hand->cards[index]->value != VALUE_ACE) {
    return 0;
  }
  int counterOf2 = 0;
  int counterOf3 = 0;
  int counterOf4 = 0;
  int counterOf5 = 0;
  for (size_t i = index + 1; i < hand->n_cards; i++) {
    if (hand->cards[i]->value == 2) {
      counterOf2++;
    }
    if (hand->cards[i]->value == 3) {
      counterOf3++;
    }
    if (hand->cards[i]->value == 4) {
      counterOf4++;
    }
    if (hand->cards[i]->value == 5) {
      counterOf5++;
    }
  }
  if (counterOf2 && counterOf3 && counterOf4 && counterOf5) {
    return -1;
  }
  return 0;
}
int is_ace_low_flushStraight_at(deck_t *hand, size_t index, suit_t fs) {
  if (fs == NUM_SUITS) {
    return is_ace_low_staight_at(hand, index);
  } else {
  }
}

int is_straight_at(deck_t *hand, size_t index, suit_t fs) {
  if (fs == NUM_SUITS) {
    if (is_n_length_straight_at(hand, index, fs, hand->n_cards - index)) {
      return 1;
    }
  }
}

hand_eval_t build_hand_from_match(deck_t *hand, unsigned n, hand_ranking_t what,
                                  size_t idx) {

  hand_eval_t ans;
  return ans;
}

int compare_hands(deck_t *hand1, deck_t *hand2) { return 0; }

// You will write this function in Course 4.
// For now, we leave a prototype (and provide our
// implementation in eval-c4.o) so that the
// other functions we have provided can make
// use of get_match_counts.
unsigned *get_match_counts(deck_t *hand);

// We provide the below functions.  You do NOT need to modify them
// In fact, you should not modify them!

// This function copies a straight starting at index "ind" from deck "from".
// This copies "count" cards (typically 5).
// into the card array "to"
// if "fs" is NUM_SUITS, then suits are ignored.
// if "fs" is any other value, a straight flush (of that suit) is copied.
void copy_straight(card_t **to, deck_t *from, size_t ind, suit_t fs,
                   size_t count) {
  assert(fs == NUM_SUITS || from->cards[ind]->suit == fs);
  unsigned nextv = from->cards[ind]->value;
  size_t to_ind = 0;
  while (count > 0) {
    assert(ind < from->n_cards);
    assert(nextv >= 2);
    assert(to_ind < 5);
    if (from->cards[ind]->value == nextv &&
        (fs == NUM_SUITS || from->cards[ind]->suit == fs)) {
      to[to_ind] = from->cards[ind];
      to_ind++;
      count--;
      nextv--;
    }
    ind++;
  }
}

// This looks for a straight (or straight flush if "fs" is not NUM_SUITS)
//  in "hand".  It calls the student's is_straight_at for each possible
//  index to do the work of detecting the straight.
//  If one is found, copy_straight is used to copy the cards into
//  "ans".
int find_straight(deck_t *hand, suit_t fs, hand_eval_t *ans) {
  if (hand->n_cards < 5) {
    return 0;
  }
  for (size_t i = 0; i <= hand->n_cards - 5; i++) {
    int x = is_straight_at(hand, i, fs);
    if (x != 0) {
      if (x < 0) { // ace low straight
        assert(hand->cards[i]->value == VALUE_ACE &&
               (fs == NUM_SUITS || hand->cards[i]->suit == fs));
        ans->cards[4] = hand->cards[i];
        size_t cpind = i + 1;
        while (hand->cards[cpind]->value != 5 ||
               !(fs == NUM_SUITS || hand->cards[cpind]->suit == fs)) {
          cpind++;
          assert(cpind < hand->n_cards);
        }
        copy_straight(ans->cards, hand, cpind, fs, 4);
      } else {
        copy_straight(ans->cards, hand, i, fs, 5);
      }
      return 1;
    }
  }
  return 0;
}

// This function puts all the hand evaluation logic together.
// This function is longer than we generally like to make functions,
// and is thus not so great for readability :(
hand_eval_t evaluate_hand(deck_t *hand) {
  suit_t fs = flush_suit(hand);
  hand_eval_t ans;
  if (fs != NUM_SUITS) {
    if (find_straight(hand, fs, &ans)) {
      ans.ranking = STRAIGHT_FLUSH;
      return ans;
    }
  }
  unsigned *match_counts = get_match_counts(hand);
  unsigned n_of_a_kind = get_largest_element(match_counts, hand->n_cards);
  assert(n_of_a_kind <= 4);
  size_t match_idx = get_match_index(match_counts, hand->n_cards, n_of_a_kind);
  ssize_t other_pair_idx = find_secondary_pair(hand, match_counts, match_idx);
  free(match_counts);
  if (n_of_a_kind == 4) { // 4 of a kind
    return build_hand_from_match(hand, 4, FOUR_OF_A_KIND, match_idx);
  } else if (n_of_a_kind == 3 && other_pair_idx >= 0) { // full house
    ans = build_hand_from_match(hand, 3, FULL_HOUSE, match_idx);
    ans.cards[3] = hand->cards[other_pair_idx];
    ans.cards[4] = hand->cards[other_pair_idx + 1];
    return ans;
  } else if (fs != NUM_SUITS) { // flush
    ans.ranking = FLUSH;
    size_t copy_idx = 0;
    for (size_t i = 0; i < hand->n_cards; i++) {
      if (hand->cards[i]->suit == fs) {
        ans.cards[copy_idx] = hand->cards[i];
        copy_idx++;
        if (copy_idx >= 5) {
          break;
        }
      }
    }
    return ans;
  } else if (find_straight(hand, NUM_SUITS, &ans)) { // straight
    ans.ranking = STRAIGHT;
    return ans;
  } else if (n_of_a_kind == 3) { // 3 of a kind
    return build_hand_from_match(hand, 3, THREE_OF_A_KIND, match_idx);
  } else if (other_pair_idx >= 0) { // two pair
    assert(n_of_a_kind == 2);
    ans = build_hand_from_match(hand, 2, TWO_PAIR, match_idx);
    ans.cards[2] = hand->cards[other_pair_idx];
    ans.cards[3] = hand->cards[other_pair_idx + 1];
    if (match_idx > 0) {
      ans.cards[4] = hand->cards[0];
    } else if (other_pair_idx > 2) { // if match_idx is 0, first pair is in 01
      // if other_pair_idx > 2, then, e.g. A A K Q Q
      ans.cards[4] = hand->cards[2];
    } else { // e.g., A A K K Q
      ans.cards[4] = hand->cards[4];
    }
    return ans;
  } else if (n_of_a_kind == 2) {
    return build_hand_from_match(hand, 2, PAIR, match_idx);
  }
  return build_hand_from_match(hand, 0, NOTHING, 0);
}
