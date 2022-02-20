/*Have a program request the user to enter an uppercase letter. Use nested loops to produce 
a pyramid pattern like this:  
      A
     ABA
    ABCBA
   ABCDCBA
  ABCDEDCBA   
 The pattern should extend to the character entered. For example, the preceding pattern 
 would result from an input value of  E . Hint: Use an outer loop to handle the rows. Use 
 three inner loops in a row, one to handle the spaces, one for printing letters in ascending 
 order, and one for printing letters in descending order. If your system doesn’t use ASCII 
 or a similar system that represents letters in strict number order, see the suggestion in 
 programming exercise 3.  */
 #include<stdio.h>
 int main(void)
 {
     char letter,ch;
     int i,row,sp,as,de;

     printf("Put the core letter here(A...Z): ");
     scanf("%c",&letter);
     i=letter-64;
     //printf("%d %c\n",i,letter);
     
     for(row=0;row<i;row++)
     {
        for(sp=0;sp<(i-row);sp++)
            printf(" ");
        for(as=0,ch=65;as<=row;as++,ch++)
            printf("%c",ch);
        for (de=1,ch=(64+row);de<=row;de++,ch--)
            printf("%c",ch);
        
        printf("\n");
     }

     return 0;
 }
   