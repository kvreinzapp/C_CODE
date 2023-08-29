//diplay float double long double value in two ways,hex is a optional way 
#include<stdio.h>
int main(void)
{
    float aboat=32000.0;
    double abet=2.14e9;
    long double dip=5.23e-5;

    printf("%f can be written %e or hex way %a\n",aboat,aboat,aboat);
    printf("%f can be written %e or hex way %a\n", abet, abet, abet); //use the same specifiers because in function they are all double[Page82]

    printf("%Lf can be written %Le or hex way %La\n", dip, dip, dip); //add L as prefix

    return 0;

}