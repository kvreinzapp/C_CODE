#include <stdio.h>

int main() {
  int integer1 = 3;
  int integer2 = 4;
  int *ptr1 = &integer1;
  int **ptr2 = &ptr1;
  printf("Address of integer1: %p\n", &integer1);
  printf("Address of integer2: %p\n", &integer2);
  puts("The above result means that my computer is addressed in Byte");
  puts("");
  printf("ptr1(what ptr1 contain): %p\n", ptr1);
  printf("ptr1(where ptr1 stores): %p\n", &ptr1);
  puts("The above result means that: the pointer to int is far away from "
       "12Byte. Not as what I expected which is 8.");
  puts("");
  puts("What about I use another pointer pointed to ptr1?");
  printf("The content of ptr2: %p\n", ptr2);
  printf("The address of ptr2: %p\n", &ptr2);
  puts("Oooweee, now the gap is 8?");
  puts("");
}
