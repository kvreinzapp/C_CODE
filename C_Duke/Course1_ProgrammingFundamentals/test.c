#include <stdio.h>

int main() {
  short y = 30000;
  short x = y + 10000;
  printf("%d\n", y);
  printf("%d\n", x);
  printf("y: %lu bytes", sizeof(y));
  printf("x: %lu bytes", sizeof(x));
}
