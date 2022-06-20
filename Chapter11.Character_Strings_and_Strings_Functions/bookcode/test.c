#include <stdio.h>
int main(void)
{
  char *p1 = "Gcc";
  p1[0] = 'g';
  printf("Gcc");
  printf("%s", "Gcc");

  return 0;
}