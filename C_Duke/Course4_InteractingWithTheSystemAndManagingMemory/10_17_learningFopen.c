#include <stdio.h>

int main(void) {
  FILE *stream = fopen("fortnight.txt", "r");
  if (stream == NULL) {
    printf("file opening error");
    return 1;
  }
  char ch;
  while ((ch = fgetc(stream)) != EOF) {
    putchar(ch);
  }
  fclose(stream);
  return 0;
}
