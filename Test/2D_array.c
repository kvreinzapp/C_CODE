#include <stdio.h>

int main() {
  int zippo[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
  puts("zippo = &zippo[0] = &&zippo[0][0]");
  puts("**zippo = *zippo[0] = zippo[0][0]");
  puts("");
  printf("Address of zippo: %p\n", &zippo);
  printf("Content of zippo: %p\n", zippo);
  printf("Address of zippo[0]: %p\n", &zippo[0]);
  printf("Content of zippo[0]: %p\n", zippo[0]);
  printf("Address of zippo[0][0]: %p\n", &zippo[0][0]);
  printf("Content of zippo[0][0]: %d\n", zippo[0][0]);
}
