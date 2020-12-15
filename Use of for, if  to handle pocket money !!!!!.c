/******************************************************************************
@Bhavanishankar 

use of for, if  to handle pocket money !!!!! 

*******************************************************************************/

#include <stdio.h>
#define pocket_money 1000
//#define  no_times 5
int main()
{
   int no_times=0, money_spent=0, no_ice, ppi, no_ice_eaten=0;
   for(no_times; no_times<5; no_times++)
      {
       printf(" enter number of ice creams and price per ice cream");
       scanf("%d%d", &no_ice, &ppi);
       money_spent =money_spent+ (no_ice)*ppi;
       no_ice_eaten+=no_ice;
      
   }
    printf("money spent = %d  and money saved = %d", money_spent, pocket_money-money_spent);
    printf("number of ice creams eaten  %d", no_ice_eaten);
    return 0;
}

