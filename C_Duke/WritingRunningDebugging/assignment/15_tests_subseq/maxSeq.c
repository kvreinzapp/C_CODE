#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int *array, size_t n) {
  if (n == 0) {
    return EXIT_FAILURE;
  }
  if (array == NULL) {
    return EXIT_FAILURE;
  }
  int maxLength = 0;
  int nowLength = 1;
  for (size_t i = 0; i < n - 1; i++) {
    if (array[i] < array[i + 1]) {
      nowLength++;
    }
    if (array[i] >= array[i + 1]) {
      if (nowLength > maxLength) {
        maxLength = nowLength;
        nowLength = 1;
      }
    }
  }
  return maxLength;
}
