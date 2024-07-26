#include <stdio.h>
#include <stdlib.h>

int compareInt(const void *int_a, const void *int_b) {
  const int a = *(int *)int_a;
  const int b = *(int *)int_b;
  return b - a;
}

void arrayOutPut(const int *array, size_t nel) {
  for (size_t i = 0; i < nel; i++) {
    printf("%d ", array[i]);
  }
  puts("");
  return;
}

int main(void) {
  int array[] = {1, 33, 54, 3, 2, 99};
  size_t array_size = sizeof(array) / sizeof(array[0]);
  arrayOutPut(array, array_size);
  qsort(array, array_size, sizeof(int), compareInt);
  arrayOutPut(array, array_size);
}
