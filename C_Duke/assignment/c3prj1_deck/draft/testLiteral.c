#include <stdio.h>

int main(void) {
  char *a = "apple";
  a[0] = 'b';
  printf("%s", a);
}
