/******************************************************************************

@Bhavanishankar

Multiplication table  

*******************************************************************************/
#include <stdio.h>

int main()
{
   int num,i;
    printf("########## Multiplication table ##########\n ");
    printf("Enter the number \n");
    scanf("%d", &num);
    printf("###################\n");
    for(i=1;i<=20;i++)
        printf("%d*%d=%d\n", num,i, num*i);

    return 0;
}

