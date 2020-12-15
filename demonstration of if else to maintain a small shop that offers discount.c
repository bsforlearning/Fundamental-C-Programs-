/******************************************************************************
@Bhavanishankar 

demonstration of if else to maintain a small shop that offers discount   

*******************************************************************************/
#include <stdio.h>
#define dis 0.1
int main()
{
    int qty;
    float rpu, total_exp;
    printf("Enter the quantity\n");
    scanf("%d", &qty);
    printf("Enter rate per unit\n");
    scanf("%f", &rpu);
    if(qty<1000)
        total_exp=qty*rpu;
    else
        total_exp=(qty*rpu)- (qty*rpu)*dis;
    printf("Total expense= %f", total_exp);
    return 0;
}

 

