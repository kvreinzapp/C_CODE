#include <stdio.h>

int main(void) {
  int array[] = {1, 2, 3, 4, 5};
  int n = sizeof(array) / sizeof(int);
  printf("is %d 5?", n);
  return 0;
}
