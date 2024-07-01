#include <stdio.h>

void exchange(int *ch1, int *ch2) {
  int temp = *ch1;
  *ch1 = *ch2;
  *ch2 = temp;
}

int main(void) {
  int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  printf("22: %d", array[2][2]);
  exchange(&array[0][0], &array[2][2]);
  printf("22: %d", array[2][2]);
}
