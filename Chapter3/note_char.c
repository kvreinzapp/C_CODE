#include <stdio.h>
int main(void)
{
    //Point1:the first thing which you can print out: 3 kinds of it //'!''&' //(num) '1' '2' //(letter_up and down)'A' 'b'

    //2 ways to assign
    char x1 = 'A';                       //a better way
    printf("we got %c \n", x1);

    char y1 = 65;                        //only for ascii system
    printf("we got %c \n\n", y1);

    //a trick one (my system(as well as int)is 64 bit, char is 8-bit)
    char m1 ='AB';                       //'A':65(0100 0001)  'B':66(0100 0010)  'AB':16706(0100 0001 0100 0010) [mode]char ascii(dem) bin
    printf("we only have %c \n\n",m1);   //you can only put 1 char in '' by this form , othrewise you only get the last one [reson--Page73]



    //point2: the second thing which you can't print out: BELL ESC SPACE FF

    //2 ways to assigh:
    //first: juest ascii(octal) numner
    char beep = 7;                      //see in beep.c
    //char x = \0x42;                   //stray '\' in program                      [wrong way]
    char x = '0x42';                    // ‘813184050’ to ‘50’ same wrong as 'FATE' [wrong way]
    char m = 0x42;                      //hex      int 66
    char n = 0101;                      //otcal    int 65
    char z = 101;                       //decimal  int 101
    long long y = 0x42LL;               //dont foorget ll in two position
    printf("%c  %c %c %c %lld\n", x, m, n, z, y);

    getchar();

    //second: we give them a new identity called escaped sequences, like this '\a' '\n',see Page 74
    char beep1 = '\a';
    //one need to pay attention :  \\ \' \"
    printf("he said: \"a \\ is a backslash.\"\n");         //wanted one
    printf("he said: \"a \\ is a backslash.\"\"n");        //page 75-- unwanted one , you misunderstand it
    //another one need to pa: combine with the first way, use asicc number in \ form , like '\0oo' '\xhh'(not '\0xhh').  why we prefer this way? Page76
    //both [wrongway are on the fotward]
    char beep2 = '\007';                 // otacl way   '\07' '\7' both is ok
    char beep3 = '\x07';                 //hexadecimal way
   
    char ctrlp = '\x10';                 //  same as below
    char ctrlp1 = '\x010';               // if '\X010',it must be upper? ans:unknown escape sequence: '\X'
    
    return 0;
}
