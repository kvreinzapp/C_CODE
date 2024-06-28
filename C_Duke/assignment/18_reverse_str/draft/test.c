#include <stdio.h>

void exchange(char *ptr1, char *ptr2) {
  char temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

int main(void) {
  char str[] = "man";
  exchange(&str[0], &str[2]);
  printf("%s", str);
}
