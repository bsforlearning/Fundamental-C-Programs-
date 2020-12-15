/******************************************************************************
@Bhavanishankar 

find the sum of digits  of a given number  

*******************************************************************************/

int main()
{
    int num=1234,rem, sum=0;
    while (num!=0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("The sum of digits %d\n", sum);
    return 0;
}
