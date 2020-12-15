/******************************************************************************

@Bhavanishankar 

generate a reverse half pyramid 

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i, j,n;
  printf("Enter number of rows\n");
  scanf("%d", &n);
   for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
       {
           printf("%d", j);
       }
        printf("\n");
    }

    return 0;
}

