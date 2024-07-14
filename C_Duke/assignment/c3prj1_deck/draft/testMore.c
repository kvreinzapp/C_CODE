#include <stdio.h>

int main() {
  const char *a = "apple";
  const char *b = "banana";
  const char *c = "table";
  const char *flex[] = {a, b, c};

  // Valid operations
  printf("flex: %p\n", (void *)flex); // Address of the array flex
  printf("flex + 1: %p\n",
         (void *)(flex + 1));   // Address of the second element of flex
  printf("*flex: %s\n", *flex); // Outputs: apple
  printf("*(flex + 1): %s\n", *(flex + 1)); // Outputs: banana

  // Valid operation but different meaning
  printf("*flex + 1: %s\n",
         *flex + 1); // Outputs: pple (moves within the string "apple")

  return 0;
}
