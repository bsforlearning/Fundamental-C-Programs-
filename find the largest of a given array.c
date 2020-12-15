/******************************************************************************

@Bhavanishankar 

find the largest of a given array


**************************************************************************/
#include <stdio.h>

int main()
{
   int arr[]={22,44,33,11,66,99,88};
   int i, large;
   printf("Largest\n");
   // printf("Enter the size of the array")
   printf("The input array is \n");
   for(i=0;i<(sizeof(arr)/sizeof(int));i++)
        printf("%d\t", arr[i]);
   large=arr[0];
   for(i=1;i<(sizeof(arr)/sizeof(int));i++)
        if(arr[i]>large)
            large=arr[i];
   printf("\nthe largest is %d", large);
   return 0;
}

