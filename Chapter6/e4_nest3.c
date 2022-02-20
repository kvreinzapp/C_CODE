/*Use nested loops to produce the following pattern:  
  A
  BC
  DEF
  GHIJ
  KLMNO
  PQRSTU  
*/
#include<stdio.h>
int main(void)
{
    const int ROW=6;
    int row,i;
    char ch='A';                           //the secret is not ininial the ch in for loop

    for ( row = 0; row < ROW; row++)
    {
        for ( i = 0; i <= row; i++,ch++)
            printf("%c",ch);
        
        printf("\n");
    }
    return 0;
}


