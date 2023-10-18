#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    printf("My system's number of bits in a char is %d, ", CHAR_BIT);
    printf("which means 1 char is 1 byte in my system.\n");
    printf("Here are other types' information.\n\n");

    //printf("%d %d\n",CHAR_MIN,CHAR_MAX); //same as the sighed way ,so i display it
    printf("char: %d %d %u, 8 bit = 1 byte value.\n", SCHAR_MIN, SCHAR_MAX, UCHAR_MAX);

    printf("short: %hd %hd %hu ,16 bit = 2 byte value.\n", SHRT_MIN, SHRT_MAX, USHRT_MAX);
    printf("int: %d %d %u ,32 bits = 4byte value.\n", INT_MIN, INT_MAX, UINT_MAX);
    printf("long: %ld %ld %lu ,64 bits = 8 byte value.\n", LONG_MIN, LONG_MAX, ULONG_MAX);
    printf("long long: %lld %lld %llu ,64 bits = 8 byte value.\n\n", LLONG_MIN, LLONG_MAX, ULLONG_MAX);

    printf("Number of bits in the mantissa of a float:%d\n", FLT_MANT_DIG);
    printf("float precision = %d digets\n", FLT_DIG);
    printf("smallest normal float: %e\n", FLT_MIN);
    printf("biggestest normal float: %e\n", FLT_MAX);
    printf("Minimum base-10 negative exponent for a float: %d\n", FLT_MIN_10_EXP);
    printf("Maximum base-10 positive exponent for a float: %d\n", FLT_MAX_10_EXP);
    printf("Difference between 1.00 and the least float value greater than 1.00: %e\n\n", FLT_EPSILON);


    printf("Number of bits in the mantissa of a double:%d\n", DBL_MANT_DIG);
    printf("double precision = %d digets\n", DBL_DIG);
    printf("smallest normal double: %e\n", DBL_MIN);
    printf("biggestest normal double: %e\n", DBL_MAX);
    printf("Minimum base-10 negative exponent for a double: %d\n", DBL_MIN_10_EXP);
    printf("Maximum base-10 positive exponent for a double: %d\n", DBL_MAX_10_EXP);
    printf("Difference between 1.00 and the least double value greater than 1.00: %e\n\n", DBL_EPSILON);

    printf("Sum up: we still don't know how many bytes do my double have\n");
    printf("i'm a silly man ,i've learn this in Chapter3, but i foget it\n\n");

    //int family
    //signed
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type short has a size of %zd bytes.\n", sizeof(short));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    //unsigned
    printf("Type unsigned has a size of %zd bytes.\n", sizeof(unsigned));
    printf("Type unsigned short has a size of %zd bytes.\n", sizeof(unsigned short));
    printf("Type unsigned long has a size of %zd bytes.\n", sizeof(unsigned long));
    printf("Type unsigned long long has a size of %zd bytes.\n", sizeof(unsigned long long));

    printf("Type char has a size of %zd bytes.\n", sizeof(char));

    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));

    return 0;
}