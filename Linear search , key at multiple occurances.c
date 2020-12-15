/***************************************************************
 
 @Bhavanishankar 
 
 Linear search , key at multiple occurances 
 
**********************************************/
#include <stdio.h>

int main()
{
   int arr[]={10, 20, 35, 14, 15, 20, 35, 20};
   
  int  n=(sizeof(arr)/sizeof(int));
   int i, key=35;
   int flag=0;
   int count=0;
  printf("Linear Search\n");
  printf("SUCCESS at pos\n") ;
   for(i=0;i<n;i++)
   {
       if(arr[i]==key)
       {
           printf( "%d\n", i+1);
           count+=1;
           flag=1;
       }
   }
    if(count ==0)
           printf("\nFAILURE\n");
    else
    printf("%d present at %d times ", key, count);
  

    return 0;
}

