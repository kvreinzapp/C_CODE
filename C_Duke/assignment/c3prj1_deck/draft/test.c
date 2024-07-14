#include <stdio.h>

int main(void) {
  char fix[3][10] = {"apple\0", "banana\0", "table\0"};
  const char *a = "apple";
  const char *b = "banana";
  const char *c = "table";
  const char *flex[] = {a, b, c};

  printf("fix[0][0] is %c\n", fix[0][0]);
  printf("fix[0][1] is %c\n", fix[0][1]);
  puts("");

  printf("&fix[0][0] is %p, fix[0] is %p\n", &fix[0][0], fix[0]);
  puts("they are address of the first row's element: int *");
  printf("&fix[0] is %p, fix is %p\n", &fix[0], fix);
  puts("they are address of the first row: int (*)[]");
  puts("fix's typs is int (*)[], *fix's type is int[3],but decay to int* in "
       "most expression, **fix's type is int");
  puts("thus the add 1 thing is clear");
  puts("another thing i know here is you must add \0");
  puts("");

  //  puts("now is the every char");
  //  for (size_t i = 0; i < 3; i++) {
  //    for (size_t j = 0; j < 10; j++) {
  //      printf("fix[%zu][%zu] is %c, &fix[%zu][%zu] is %p\n", i, j, fix[i][j],
  //      i,
  //             j, &fix[i][j]);
  //      if (fix[i][j] == '\0') {
  //        printf("yeah\n");
  //      }
  //    }
  //  }

  printf("&flex[0][0] is %p, flex[0] is %p\n", &flex[0][0], flex[0]);
  printf("&flex[1][0] is %p, flex[1] is %p\n", &flex[1][0], flex[1]);
  printf("&flex[0] is %p, flex is %p\n", &flex[0], flex);
  printf("&flex[0][0] is %p, flex is %p\n", &flex[0][0], flex);
}
