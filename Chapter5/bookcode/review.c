#include <stdio.h>
#define LIMIT 103
int main(void)
{
    char ch = 'a';

    while (ch<='g')
        printf("%5c", ch++);  //put ch++ here may be a better way
        
    printf("\n");

    return 0;
}