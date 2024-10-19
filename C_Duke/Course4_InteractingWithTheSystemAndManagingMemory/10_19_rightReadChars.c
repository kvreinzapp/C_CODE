#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    puts("Input nubmers is not 2");
  }
  FILE *file = fopen(argv[1], "r");
  if (file == NULL) {
    puts("Can not open file");
  }
  int c;
  while ((c = fgetc(file)) != EOF) {
    printf("%d", c);
  }
  return EXIT_SUCCESS;
}
