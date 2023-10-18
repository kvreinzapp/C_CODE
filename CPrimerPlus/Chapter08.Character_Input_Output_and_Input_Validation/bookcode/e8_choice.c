/*Write a program that shows you a menu offering you the choice of addition, subtraction,
multiplication, or division. After getting your choice, the program asks for two numbers,
then performs the requested operation. The program should accept only the offered
menu choices. It should use type  float  for the numbers and allow the user to try again
if he or she fails to enter a number. In the case of division, the program should prompt
the user to enter a new value if  0  is entered as the value for the second number. A typical
program run should look like this:
  Enter the operation of your choice:
  a. add           s. subtract
  m. multiply      d. divide
  q. quit
  a
  Enter first number:  22 .4
  Enter second number:  one
  one is not an number.
  Please enter a number, such as 2.5, -1.78E8, or 3:  1
  22.4 + 1 = 23.4
  Enter the operation of your choice:
  a. add           s. subtract
  m. multiply      d. divide
  q. quit
  d
  Enter first number:  18.4
  Enter second number:  0
  Enter a number other than 0:  0.2
  18.4 / 0.2 = 92
  Enter the operation of your choice:
  a. add           s. subtract
  m. multiply      d. divide
  q. quit
  q
  Bye.
*/
#include<stdio.h>

char get_choice(void);
char get_first(void);

int main(void)
{
    char ch;
    ch=get_first();
    putchar(ch);
}

char get_first(void)
{
    char ch;
    ch = getchar();
    while ((ch == ' ') || (ch == '\t') || (ch == '\n'))
    {
        ch = getchar();
    }
    while (getchar() != '\n')
        continue;
    return ch;
}

char get_choice(void)
{
    char ch;
    printf
}