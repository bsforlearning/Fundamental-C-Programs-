/******************************************************************************

@Bhavanishankar 

transactions in a jeans store 

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("**** Welcome to Jeans world****\n");
    char flag ='y';
    int count=0, status=0;
    float price, total_price=0, final_bill;
    while(flag=='y')
    {
        printf("enter the price of the jeans selected to buy\n");
        scanf("%f", &price);
        count++;
        total_price+=price;
        printf("do you wish to continue shopping?    press 'y' for YES and 'n' for NO !!!!\n");
        scanf(" %c", &flag);
    }
    
   final_bill=(count>=5)?status=1,total_price*0.9:total_price;
   final_bill=((total_price>=5000)&&(status!=1))?total_price*0.9:final_bill;
  printf("Please pay %5.2f Rupees", final_bill);
    
    printf("\n\n\t ##### Thank you for shopping with us  ##### ");
    return 0;
}





