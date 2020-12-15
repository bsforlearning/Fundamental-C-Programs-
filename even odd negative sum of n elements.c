/***************************************************************
 
 @Bhavanishankar 
 
 read n elements find the sum of even, odd, negative elements based on user's choice 
input  1, 2, 8, 9, -3, 6, 5, -8, 9
 output esum =16 osum 24 nsum=-11
 
**********************************************/
#include <stdio.h>

int main()
{
    int arr[10],i, size, esum=0, osum=0, nsum=0;
    char choice;
    printf("Print sum of odd even negative elements");
    printf("Enter the size of array\n");
    scanf("%d", &size);
    printf("Enter the elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
   printf("Enter your choice e for even sum o odd sum and n for negative sum\n");
   scanf(" %c", &choice);
   switch(choice)
   {
       case 'e': for(i=0;i<size;i++)
                 {
                     if (arr[i]>0 && arr[i]%2==0) // if even
                     {
                         esum+=arr[i];
                     }
                 }
                 printf("Even sum = %d \t", esum);
                break;
                
      case 'o':for(i=0;i<size;i++)
                 {
                    if (arr[i]>0 && arr[i]%2==1) // if odd
                     {
                         osum+=arr[i];
                     }
                 }
                 printf("Odd sum = %d \t", osum);
                break;
                
       case 'n': for(i=0;i<size;i++)
                 {
                    if (arr[i]<0) // if negative
                     {
                         nsum+=arr[i];
                     }
                 }
                 printf("Negative sum = %d \t", nsum);
                 break;
                 
       default: printf(" Enter valid choice\n");
   }
  // printf("Even sum = %d \t  Odd sum = %d\t   Negative sum= %d\n", esum, osum, nsum);
   
    return 0;
}

