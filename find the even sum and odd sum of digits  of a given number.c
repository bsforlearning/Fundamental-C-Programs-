/******************************************************************************
@Bhavanishankar 

find the even sum and odd sum of digits  of a given number  

*******************************************************************************/
#include <stdio.h>

int main()
{  
  long int esum=0, osum=0, num,rem;
   printf("Enter a number\n");
   scanf("%ld", &num);
   while(num>0)
   {                                    
       rem=num%10;
       if((rem%2)==0) esum+=rem;
       else
       osum+=rem;
       num=num/10;
    }
    printf("Odd sum = %d \t  Even sum=%d", osum, esum);
    return 0;
}

