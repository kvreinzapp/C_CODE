#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int *array, size_t n);

int main(void) {
  int array1[] = {1, 2, 1, 3, 3, 7, 2, 4, 6, 9};
  int array2[0];

  if (4 != maxSeq(array1, 10)) {
    puts("Failed in array1");
    return EXIT_FAILURE;
  }

  if (1 != maxSeq(array2, 0)) {
    puts("Failed in array2");
    return EXIT_FAILURE;
  }

  puts("All passed");
  return EXIT_SUCCESS;
}
