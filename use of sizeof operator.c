/******************************************************************************

@Bhavanishankar 

use of sizeof operator 


*******************************************************************************/
#include <stdio.h>
#include<limits.h>

int main()
{
    printf("size of int is %d\t max int that u can store is  %d\n", sizeof(int),INT_MAX);
    printf("size of unsigned int is %d\t max unsigned int that you can store is %u", sizeof(unsigned int),UINT_MAX);

    return 0;
}

