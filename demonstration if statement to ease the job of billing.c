/******************************************************************************
@Bhavanishankar 

demonstration if statement to ease the job of billing     

*******************************************************************************/
#include <stdio.h>

int main()
{
    int items;
    float rpi, total_bill_amt;
    printf("enter number of items\n");
    scanf("%d",&items);
    printf("enter the price per item");
    scanf("%f", &rpi);
    total_bill_amt=items*rpi;
    if(total_bill_amt>=5000)
        {
            total_bill_amt=total_bill_amt-(total_bill_amt)*0.1;
        }
    printf("totlal bill amoint= %f", total_bill_amt);

    return 0;
}

