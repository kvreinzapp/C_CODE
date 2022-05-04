#include "Chapter10.h"
#include <stdio.h>
#define COLS 5

void get_set(double ar[], int n, int);
int main(void) {
  double set1[COLS];
  double set2[COLS];
  double set3[COLS];
  get_set(set1, COLS);
  get_set(set2, COLS);
  get_set(set3, COLS);

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
