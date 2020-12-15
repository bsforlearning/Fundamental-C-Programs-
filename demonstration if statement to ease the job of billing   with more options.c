/******************************************************************************
@Bhavanishankar 

demonstration if statement to ease the job of billing   with more options    

*******************************************************************************/

#include <stdio.h>

int main()
{
    int items;
    float rpi, total_bill_amt, discount, i;
    printf("enter number of items\n");
    scanf("%d",&items);
    printf("enter the price per item");
    scanf("%f", &rpi);
    total_bill_amt=items*rpi;
    if((items>5)&&(total_bill_amt>=5000))
        {
            i=total_bill_amt;
            discount=0.1*i;
            total_bill_amt=0.9*total_bill_amt;
           // discount =
            printf("final bill amount = %f   and u got %f discount", total_bill_amt,discount);
        }
    else 
       {
        total_bill_amt=items*rpi;
        printf("totlal bill amoint= %f", total_bill_amt);
       }
    return 0;
}

    

