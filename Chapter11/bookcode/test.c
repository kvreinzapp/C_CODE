#include "Chapter11.h"
#include <stdio.h>
#include <string.h>

#define SIZE 30
#define BUGSIZE 13

int main(void) {
  char *str;
  strcpy(str, "walkman");
}

char *s_gets(char *st, int n) {
  int *ret_val;
  int i = 0;

<<<<<<< HEAD
    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        while ((st[i] != '\n') && (st[i] != '\0'))
        {
            i++;
        }
        if (st[i] == '\n')
        {
            st[i] = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
=======
  ret_val = fgets(st, n, stdin);
  if (ret_val) {
    while ((st[i] != '\n') && (st[i] != '\0')) {
      i++;
    }
    if (st[i] == '\n') {
      st[i] == '\0';
    } else {
      while (getchar() != '\n') {
        continue;
      }
>>>>>>> bc463b06e6466d966262d06f6a96dcb50fe1dc7e
    }
  }
  return ret_val;
}
