/***************************************************************
 
 @Bhavanishankar 
 
 Linear search 
**********************************************/

#include <stdio.h>

int main()
{
   int arr[]={10, 20, 35, 14, 15};
   
  int  n=(sizeof(arr)/sizeof(int));
   int i, key=20;
  printf("Linear Search \t");
   for(i=0;i<n;i++)
   {
       if(arr[i]==key)
       {
           printf("SUCCESS at pos %d\n", i+1);
           break;
       }
   }
    if(i==n)
           printf("FAILURE\n");
    
   return 0;
}

