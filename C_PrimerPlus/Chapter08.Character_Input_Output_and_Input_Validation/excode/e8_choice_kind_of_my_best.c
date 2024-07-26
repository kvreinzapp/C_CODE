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

char get_first(void);
char get_choice(void);
float get_number(void);

int main(void)
{
    char choice;
    float first_num, second_num;

    while ((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
        case 'a':
            printf("Enter first number:");
            first_num = get_number();
            printf("Enter second number:");
            second_num = get_number();
            printf("%.2f + %.2f = %.2f\n"
                    ,first_num,second_num,first_num+second_num);
            break;
        case 's':
            printf("Enter first number:");
            first_num = get_number();
            printf("Enter second number:");
            second_num = get_number();
            printf("%.2f - %.2f = %.2f\n", first_num, second_num, first_num - second_num);
            break;
        case 'm':
            printf("Enter first number:");
            first_num = get_number();
            printf("Enter second number:");
            second_num = get_number();
            printf("%.2f * %.2f = %.2f\n", first_num, second_num, first_num * second_num);
            break;
        case 'd':
            printf("Enter first number:\n");
            first_num = get_number();
            printf("Enter second number:\n");
            while (0 == (second_num = get_number()))
                printf("Enter a number other than 0: ");
            printf("%.2f / %.2f = %.2f", first_num, second_num, first_num / second_num);
            break;
        default:
            printf("Program error!\n");
            break;
        }
    }

    
}

char get_first(void)
{
    char ch;
    ch = getchar();
    while ((ch == ' ') || (ch == '\t') || (ch == '\n')) // while (isspace(ch)) is a better one 
        ch = getchar();
    while (getchar() != '\n')
        continue;
    printf("Your choice is %c.\n",ch);
    return ch;
}

char get_choice(void)
{
    char ch;
    printf("Enter the operation of your choice:\n"
           "a. add                  s. subtract\n"
           "m. multiply             d. divide  \n"
           "q. quit                            \n");
    ch=get_first();
    while ((ch != 'a') && (ch != 's') && (ch != 'm') && (ch != 'd') && (ch != 'q'))
        ch=get_first();
    return ch;
}

float get_number(void)
{
    float input;
    char ch;
    while (1!=scanf("%f",&input))
    {
        while ((ch=getchar())!='\n')
            putchar(ch);
        printf(" is not an number.\n"
               "Please enter a number, such as 2.5, -1.78E8, or 3:");
    }
    return input;   
}