#include <stdio.h>

void exchange(char *ch1, char *ch2) {
  char temp = *ch1;
  *ch1 = *ch2;
  *ch2 = temp;
}

void rotate(char matrix[10][10]) {
  for (int i = 0; i < 9; i++) { // the 9 here is n-1
    for (int j = 0; j < 9 - i; j++) {
      exchange(&matrix[i][i + j + 1], &matrix[i + j + 1][i]);
    }
  }
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 5; j++) {
      exchange(&matrix[i][j], &matrix[i][9 - j]);
    }
  }
}
