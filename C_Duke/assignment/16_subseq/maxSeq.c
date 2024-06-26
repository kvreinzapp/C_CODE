#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int *array, size_t n) {
  if (n == 0) {
    return 0;
  }
  int l = 0;
  int max = 0;
  for (size_t i = 0; i < n; i++) {
    if (i == n - 1) {
      l++;
      max = max > l ? max : l;
      l = 0;
      break;
    }
    if (array[i] < array[i + 1]) {
      l++;
    }
    if (array[i] >= array[i + 1]) {
      l++;
      max = max > l ? max : l;
      l = 0;
    }
  }
  return max;
}
