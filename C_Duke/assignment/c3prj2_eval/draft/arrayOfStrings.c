#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareString(const void *string_a, const void *string_b) {
  const char *const *a = string_a;
  const char *const *b = string_b;
  return strcmp(*a, *b);
}
void arrayOfStrOutPut(const char **array, size_t nel) {
  for (size_t i = 0; i < nel; i++) {
    printf("%s ", array[i]);
  }
  puts("");
  return;
}

int main(void) {
  const char *array[] = {"candy", "banana", "applw"};
  size_t array_size = sizeof(array) / sizeof(array[0]);
  arrayOfStrOutPut(array, array_size);
  qsort(array, array_size, sizeof(const char *), compareString);
  arrayOfStrOutPut(array, array_size);
  return 0;
}
