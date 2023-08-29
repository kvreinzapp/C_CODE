#include <stdio.h>
#include <string.h>
#include "Chapter11.h"

int main(void)
{
    char s[] = "apple";
    int x = strlen_v(s);
    printf("%d\n", x);
}