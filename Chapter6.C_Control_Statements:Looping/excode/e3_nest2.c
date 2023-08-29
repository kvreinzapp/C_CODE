/*Use nested loops to produce the following pattern:  
  F
  FE
  FED
  FEDC
  FEDCB
  FEDCBA   
*/
#include<stdio.h> 
int main(void)
{
    const int ROW=6;;
    int row;
    char ch;

    for(row=0;row<ROW;row++)
    {
        for(ch='F';ch>=('F'-row);ch--)
            printf("%c",ch);

        printf("\n");
    } 

    return 0;
}  
//book way
/*#include<stdio.h>
int main(void)
{
    const int ROW=6;;
    int row,col;
    char ch;

    for(row=0;row<ROW;row++)
    {
        for(col=0,ch='F';col<=row;col++,ch--)
            printf("%c",ch);

        printf("\n");
    }

    return 0;
}  */
