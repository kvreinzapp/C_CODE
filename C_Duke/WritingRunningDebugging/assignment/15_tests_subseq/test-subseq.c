#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int *array, size_t n);

int main(void) {
  int array1[] = {1, 2, 1, 3, 5, 7, 2, 4, 6, 9}; // nomal one, 4
  int array2[] = {1, 2, 1, 3, 3, 7, 2, 4, 6, 9}; // duplicated one, 4
  int array3[0];                                 // empty one
  int array4[] = {0, 0, 0};                      // 1
  int array5[] = {1, 1, 1};                      // 1

  if (4 != maxSeq(array1, 10)) {
    puts("Failed in array1");
    return EXIT_FAILURE;
  }

  if (4 != maxSeq(array2, 10)) {
    puts("Failed in array1");
    return EXIT_FAILURE;
  }

  if (1 != maxSeq(array3, 0)) {
    puts("Failed in array3");
    return EXIT_FAILURE;
  }

  if (1 != maxSeq(array4, 3)) {
    puts("Failed in array4");
    return EXIT_FAILURE;
  }

  if (1 != maxSeq(array5, 3)) {
    puts("Failed in array5");
    return EXIT_FAILURE;
  }
  puts("All passed");
  return EXIT_SUCCESS;
}
