/*Use nested loops to produce the following pattern: 
  $
  $$
  $$$
  $$$$
  $$$$$ 
  */  

#include<stdio.h>
int main(void)
{
    const int ROW = 5;
    const int COL = 5;

    for (int row = 0; row < ROW; row++)
    {
        for (char col = 0; col<=row; col++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}

