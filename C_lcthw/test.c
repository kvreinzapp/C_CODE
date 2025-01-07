#include <stdio.h>
int main() {
  int array[] = {1, 2, 3, 4, 5};
  int *ptr = array;
  printf("size of array is %lu.\nsize of inteter is %lu.\nsize of ptr is "
         "%lu.\nsize of array is %lu.\n",
         sizeof(array), sizeof(int), sizeof(ptr), sizeof(array) / sizeof(int));
  printf("array[0] is %d, 0[array] is %d, too", array[0], 0 [array]);
  return 0;
}
