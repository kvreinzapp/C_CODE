///thid s is the code for page137 summary
//you just need to give the line :"-13.45e12# 0" in one time .the 4 scanf() here will keep reading
//PA that %c will read the first character which contains the white space
#include<stdio.h>

int main(void)
{
   int x;
   float y;
   char z[40];
   char q;


   printf("tell me the line :\n");
   scanf("%d",&x);
   printf("the line in this way is %d \n\n",x);

   printf("tell me the line :\n");
   scanf("%f", &y);
   printf("the line in this way is %f \n\n",y);

   printf("tell me the line :\n");
   scanf("%s", z);
   printf("the line in this way is %s \n\n", z);

   printf("tell me the line :\n");
   scanf("%c", &q);
   printf("the line in this way is %c \n\n", q);

   printf("tell me the line :\n");
   scanf("%c", &q);
   printf("the line in this way is %c \n", q);

   printf("IS %2.2e the same as %2.2f?\n",1201.0,1201.0);


   return 0;
}
