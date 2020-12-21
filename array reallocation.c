/******************************************************************
 
 @Bhavanishankar
 
 array reallocation 
 
 **********************************************************************/
 #include <stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr;
   int size,i, nsize;
   printf("Enter the size of the array\n");
   scanf("%d", &size);//5
   ptr=(int*)calloc(size, sizeof(int));
   printf("Enter the elements for the array\n");
   for(i=0;i<size; i++)
        scanf("%d", (ptr+i));
    for(i=0;i<size; i++)
   printf("%d is in %u\n", *(ptr+i), (ptr+i));
   printf(" REALLOCATING\n");
   printf("Enter the new size\n");
   scanf("%d", &nsize);//10
   ptr=(int*)realloc(ptr, nsize);
   printf("Enter the elements for the news size \n");
   for(i=size;i<nsize; i++)
        scanf("%d", (ptr+i));
   for(i=size;i<nsize; i++)
   printf("%d is in %u\n", *(ptr+i), (ptr+i)); 
   printf("The Complete array is \n");
   for(i=0;i<nsize; i++)
      printf("%d is in %u\n", *(ptr+i), (ptr+i));
   free(ptr);
   return 0;
}

