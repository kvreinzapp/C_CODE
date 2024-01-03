#include <stdio.h>

void test(int (*p)[4]) { (*p)[2] = 10; }

int main() {
  int arr[] = {30, 450, 14, 5};

  test(&arr);
  printf("%d\n", arr[2]);

  return 0;
}
