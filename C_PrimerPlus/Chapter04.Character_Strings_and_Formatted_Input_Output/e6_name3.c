/*Write a program that requests the user’s first name and then the user’s last name. Have 
it print the entered names on one line and the number of letters in each name on the 
following line. Align each letter count with the end of the corresponding name, as in the 
following:  
  Melissa Honeybee
        7        8   
Next, have it print the same information, but with the counts aligned with the beginning 
of each name.  
  Melissa Honeybee
  7       8     
*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char first_name[40];
    char last_name[40];
    
    printf("What's your first_name?: ");
    scanf("%s",first_name);
    int first_width = strlen(first_name);

    printf("What's your last_name?: ");
    scanf("%s", last_name);
    int last_width = strlen(last_name);

    printf("%s %s\n",first_name,last_name);
    printf("%*d %*d\n", first_width, first_width, last_width, last_width);

    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", first_width, first_width, last_width, last_width);

    return 0;

}