/*Write a program that requests the download speed in megabits per second (Mbs) and 
the size of a file in megabytes (MB). The program should calculate the download time 
for the file. Note that in this context one byte is eight bits. Use type  float , and use  /  
for division. The program should report all three values (download speed, file size, and 
download time) showing two digits to the right of the decimal point, as in the following:  
  At 18.12 megabits per second, a file of 2.20 megabytes
  downloads in 0.97 seconds.
*/
#include<stdio.h>
int main(void)
{
    float speed,size;

    printf("What's the download speed?: ");
    scanf("%f",&speed);
    printf("What's the file size?: ");
    scanf("%f",&size);
    
    printf("At %.2f megabits per second, a file of %.2f megabytes\n",speed,size);
    printf("downloads in %.2f seconds.\n",size*8/speed);

    return 0;
} 