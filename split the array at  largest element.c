/******************************************************************************

@Bhavanishankar 

split the array at  largest element 

**************************************************************************/
#include <stdio.h>

int main()
{
   int arr[]={22,44,133,11,66,99,88};
   int i, large,index;
   printf("Largest\n");
   // printf("Enter the size of the array")
   printf("The input array is \n");
   for(i=0;i<(sizeof(arr)/sizeof(int));i++)
        printf("%d\t", arr[i]);
   large=arr[0];
   for(i=1;i<(sizeof(arr)/sizeof(int));i++)
        if(arr[i]>large)
        {
            large=arr[i];
            index=i;
        }
            
   printf("\nthe largest is %d\n", large);
   printf("elements before largest\n");
   for(i=0;i<index;i++)
        printf("%d\t", arr[i]);
     printf("\n elements after largest\n");
    for(i=index+1;i<(sizeof(arr)/sizeof(int));i++)
        printf("%d\t", arr[i]);
   return 0;
}

