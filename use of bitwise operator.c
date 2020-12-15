/******************************************************************************
@Bhavanishankar 

use of bitwise operator 

*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned short int a=5, b=10;
    printf(" the size of short int is %u bytes\n", sizeof(short int));
    printf("result of bitwise and %d  \n", a&b);
    printf("result of bitwise or %d\n", a|b);
    printf("result of bitwise xor %d\n", a^b);
    printf("result of bitwise  not  %u\n", ~a);
    printf("result of bitwise left shift  %d\n", a<<4);
    printf("result of bitwise right shift  %d", b>>4);
    return 0;
}



