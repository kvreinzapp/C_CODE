// Test my bubble sort
// Don not across the boundary
#include <stdio.h>
#include "mytool.h"

#define NUMS 5
int main(void)
{
    int ar[NUMS] = {4, 47, 32, 65, 31};
    bubble_sort(ar, NUMS);
    print_1dArray(ar, NUMS);
}