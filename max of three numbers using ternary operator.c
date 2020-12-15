/******************************************************************************
@Bhavanishankar 

max of three numbers using ternary operator 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=20, b=30,c=10;
    int max =(a>b && a>c)?a:(b>c)?b:c;
    printf("max of three numbers is %d", max);

    return 0;
}


