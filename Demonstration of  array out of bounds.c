/***********************************************************
 @Bhavanishankar 
 
 Demonstration of  array out of bounds 
 
 ******************************************************************/
#include <stdio.h>
void display(int *, int );
int main()
{
    int arr[10]={11,22,33,44,55,66,77,88,99,100};
    int i;
   
    display(arr, 10);
    
    for(i=0;i<10;i++)   
     printf("%d\t", arr[i]);
    return 0;
}
 void display(int *xyz, int n )
 {
     for(int i=0; i<=n;)
        xyz[i]=xyz[++i]+1;
         
     
 }
