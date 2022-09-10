// To illustrate <Passed by value>
#include <stdio.h>
int main(void)
{
    void printMessage(int, int *);
    void changeInt(int);
    void changeIntAgain(int *);
    void changeAdress(int *);
    void changeAdressAgain(int **);

    printf("The Initial value:\n");
    int aNum = 20;
    int *ptr = &aNum;
    printMessage(aNum, ptr);

    printf("\nNow we call <changeInt>\n");
    changeInt(aNum);
    printMessage(aNum, ptr);

    printf("\nNow we call <changeIntAgain>\n");
    changeIntAgain(ptr);
    printMessage(aNum, ptr);

    printf("\nNow we call <changeAdress>\n");
    changeAdress(ptr);
    printMessage(aNum, ptr);

    printf("\nNow we call <changeAdressAgain>\n");
    changeAdressAgain(&ptr);
    printMessage(aNum, ptr);
}

void printMessage(int num, int *ptr)
{
    printf("The num's value: %d\n", num);
    printf("The num's adress: %p\n", ptr);
    printf("The ptr's value: %p\n", ptr);
    printf("The ptr's adress: %p\n", &ptr);
}
void changeInt(int num)
{
    num = 40;
    printf("Now num in <changeInt> is %d\n", num);
}
void changeIntAgain(int *num)
{
    *num = 40;
    printf("Now num in <changeIntAgain> is %d\n", *num);
}
void changeAdress(int *num)
{
    num = NULL;
    printf("Now ptr in <changeInAdress> is %p\n", num);
}
void changeAdressAgain(int **ptr)
{
    ptr = NULL;
    printf("Now ptr in <changeAdressAgain> is %p\n", ptr);
}