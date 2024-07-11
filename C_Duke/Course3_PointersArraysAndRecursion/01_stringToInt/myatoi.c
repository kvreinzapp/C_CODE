#include <stdio.h>

int myatoi(const char *str) {
  const char *ptr = str;
  printf("decimal: %d\n", *ptr);
  printf("hex: %x\n", *ptr);
  return 0;
}
