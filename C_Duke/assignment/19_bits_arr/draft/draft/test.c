#include <stdio.h>
int main(void) {
  for (int i = 5; i >= 0; i--) { // size_t cause infinite loop here
    puts("hello");
  }
  printf("The size of size_t is: %zu bytes\n", sizeof(size_t));
}
