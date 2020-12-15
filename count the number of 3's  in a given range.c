/******************************************************************************

@Bhavanishankar 

count the number of 3's  in a given range 

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n, i, count =0;
   printf("counting number of threes in a range ");
    printf("enter the number n ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i%10 == 3)
        {
            count++;
            printf("%d\t", i);
        }
        
    }
printf("number of threes in given n is %d", count) ; 
    return 0;
}

