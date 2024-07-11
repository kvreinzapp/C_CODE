#include <stdio.h>

int iteration(int);
int tailRecurse(int);

int main(void) {
  int factor = 3;
  printf("Using factorial, the factoial of %d is %d\n", factor,
         iteration(factor));
  printf("Using tail recursion, the factoial of %d is %d\n", factor,
         tailRecurse(factor));
}
