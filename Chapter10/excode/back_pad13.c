#include "Chapter10.h"
#include <stdio.h>
#define COLS 5

void get_set(double ar[], int n);
int main(void) {
  double set1[COLS];
  double set2[COLS];
  double set3[COLS];

  printf("Enter your first set here: \n");
  for (int i = 0; i < COLS; i++) {
    scanf("%lf", (set1 + i));
  }
  printf("Your set1 is :");
  show_arr(set1, COLS);

  printf("Enter your second set here: \n");
  for (int i = 0; i < COLS; i++) {
    scanf("%lf", (set2 + i));
  }
  printf("Your set2 is :");
  show_arr(set2, COLS);

  printf("Enter your third  set here: \n");
  for (int i = 0; i < COLS; i++) {
    scanf("%lf", (set3 + i));
  }
  printf("Your set3 is :");
  show_arr(set3, COLS);

  return 0;
}

void get_set(double ar[], int n) {
  printf("Enter your set here: \n");
  for (int i = 0; i < COLS; i++) {
    scanf("%lf", (ar + i));
  }
  printf("Your set is :");
  show_arr(ar, COLS);
}
