/******************************************************************************
@Bhavanishankar 

// count even/odd digits in a given number 

*******************************************************************************/ 
#include <stdio.h>

int main()
{
    int num=123456789, ecount=0,ocount=0,rem;
    while (num!=0)
    {
        rem=num%10;
        if((rem%2) == 0) 
            ecount++;
        else
            ocount++;
        num=num/10;
    }
    printf("The even  and odd counts are %d   and %d  respectively", ecount, ocount);
    return 0;
}


