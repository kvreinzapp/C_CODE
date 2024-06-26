#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int *array, size_t n);

int main(void) {
  int array1[0];
  int array2[] = {5};
  int array3[] = {1, 5};
  int array4[] = {5, 1};
  int array5[] = {1, 2, 3, 4, 5};
  int array6[] = {1, 3, 5, 7, 2, 4, 6, 8, 9};
  int array7[] = {2, 4, 6, 1, 3};
  int array8[] = {2, 2, 2, 1};
  int array9[] = {3, 1, 2};
  int array10[] = {5, 4, 3, 2, 1};
  int array11[] = {1, 2, 1, 3, 3, 5, 7, 2, 4, 6, 8};
  int array12[] = {5, 4, 4, 2, 1, 1};
  int array13[] = {-3, -2, -1, 0, 1, 2, 3};
  int array14[] = {-1, 0, 1, -5, 2, 3};
  int array15[] = {100, 99, 98, 97, 96, 0, -1};

  if (1 != maxSeq(array1, 0)) {
    puts("Failed in array1");
    return EXIT_FAILURE;
  }

  if (1 != maxSeq(array2, sizeof(array2) / sizeof(int))) {
    puts("Failed in array2");
    return EXIT_FAILURE;
  }
  if (2 != maxSeq(array3, sizeof(array3) / sizeof(int))) {
    puts("Failed in array3");
    return EXIT_FAILURE;
  }
  if (1 != maxSeq(array4, sizeof(array4) / sizeof(int))) {
    puts("Failed in array4");
    return EXIT_FAILURE;
  }
  if (5 != maxSeq(array5, sizeof(array5) / sizeof(int))) {
    puts("Failed in array5");
    return EXIT_FAILURE;
  }
  if (5 != maxSeq(array6, sizeof(array6) / sizeof(int))) {
    puts("Failed in array6");
    return EXIT_FAILURE;
  }
  if (3 != maxSeq(array7, sizeof(array7) / sizeof(int))) {
    puts("Failed in array7");
    return EXIT_FAILURE;
  }
  if (1 != maxSeq(array8, sizeof(array8) / sizeof(int))) {
    puts("Failed in array8");
    return EXIT_FAILURE;
  }
  if (2 != maxSeq(array9, sizeof(array9) / sizeof(int))) {
    puts("Failed in array9");
    return EXIT_FAILURE;
  }
  if (0 != maxSeq(array10, sizeof(array10) / sizeof(int))) {
    puts("Failed in array10");
    return EXIT_FAILURE;
  }
  if (4 != maxSeq(array11, sizeof(array11) / sizeof(int))) {
    puts("Failed in array11");
    return EXIT_FAILURE;
  }
  if (1 != maxSeq(array12, sizeof(array12) / sizeof(int))) {
    puts("Failed in array12");
    return EXIT_FAILURE;
  }
  if (7 != maxSeq(array13, sizeof(array13) / sizeof(int))) {
    puts("Failed in array13");
    return EXIT_FAILURE;
  }
  if (3 != maxSeq(array14, sizeof(array14) / sizeof(int))) {
    puts("Failed in array14");
    return EXIT_FAILURE;
  }
  if (1 != maxSeq(array15, sizeof(array15) / sizeof(int))) {
    puts("Failed in array15");
    return EXIT_FAILURE;
  }

  puts("All pased");
  return EXIT_SUCCESS;
}
