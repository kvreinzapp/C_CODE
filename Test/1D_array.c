#include <stdio.h>
void test(int (*arr)[3]) { (*arr)[1] = 110; }
int main() {
  int list[3] = {1, 2, 3};
  printf("Address of list: %p\n", &list);
  printf("Content of list: %p\n", list);
  printf("Address of list[0]: %p\n", &list[0]);
  printf("Content of list[0]: %d\n", list[0]);
  puts("");
  int *ptr = list;
  printf("Address of ptr: %p\n", &ptr);
  printf("Content of ptr: %p\n", ptr);
  puts("");
  //  test(&list);
  printf("%d", list[1]);
}
