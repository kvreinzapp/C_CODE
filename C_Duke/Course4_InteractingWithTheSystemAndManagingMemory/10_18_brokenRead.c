#include <stdio.h>

int main(void) {
  FILE *f = fopen("hacker.txt", "r");
  if (f == NULL) { /* error handling code omitted */
  }
  while (fgetc(f) != EOF) {
    char c = fgetc(f);
    printf("%c", c);
  }
}
