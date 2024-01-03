#include <stdio.h>

int main() {
  printf("signed char: %lu\n", sizeof(char));
  printf("unsigned char: %lu\n", sizeof(unsigned char));

  printf("signed short: %lu\n", sizeof(short));
  printf("unsigned int: %lu\n", sizeof(unsigned short));

  printf("signed int: %lu\n", sizeof(int));
  printf("unsigned int: %lu\n", sizeof(unsigned int));

  printf("signed long: %lu\n", sizeof(long));
  printf("unsigned int: %lu\n", sizeof(unsigned long));

  printf("float: %lu\n", sizeof(float));

  printf("double: %lu\n", sizeof(double));

  printf("char *: %lu\n", sizeof(char *));

  printf("int *: %lu\n", sizeof(int *));
}
