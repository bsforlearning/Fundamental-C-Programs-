/***********************************************************
 @Bhavanishankar 
 
 Demonstration of  matrix addition using 2D array 
 
 ******************************************************************/
#include <stdio.h>

int main()
{
   int m,n,p,q,i,j;
   int mat_A[10][10],mat_B[10][10], Sum[10][10];
    printf("Matrix Operations\n");
    printf("Enter the dimension of the matrix A\n");
    scanf("%d%d", &m,&n);
    printf("Enter the dimension of the matrix B\n");
    scanf("%d%d", &p,&q);
    if((m!=n) && (p!=q))
    printf("Matrix adition not posible");
    printf("Enter the elements for the matrix A\n");
    for(i=0;i<m;i++)
         {
            for(j=0;j<n;j++)
             {
                 scanf("%d", &mat_A[i][j]);
             }
         }
          printf("Enter the elements for the matrix B\n");
    for(i=0;i<p;i++)
         {
            for(j=0;j<q;j++)
             {
                 scanf("%d", &mat_B[i][j]);
             }
         }
         // addition begins here 
    for(i=0;i<p;i++)
         {
            for(j=0;j<q;j++)
             {
                 Sum[i][j]=mat_A[i][j]+mat_B[i][j];
             }
         }
    for(i=0;i<m;i++)
         {
            for(j=0;j<n;j++)
             {
                 printf("%d\t", Sum[i][j]);
             }
        printf("\n");
         }
    return 0;
}

