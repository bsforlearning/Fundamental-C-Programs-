/******************************************************************************
@Bhavanishankar 

design a simple calculator using switch case statements  

*******************************************************************************/
#include <stdio.h>

int main()
{
   int op1, op2;
   char opr;
   printf("Welcome to my calculator\n");
   printf("enter two operands\n");
   scanf("%d%d", &op1, &op2);
   printf("enter the operator\n");
   scanf(" %c", &opr);
   printf("###\n");
  
   switch(opr)
   {
       case '+': printf("%d", op1+op2);
                 break;
       case '-': printf("%d",op1-op2);
                // break;   
       case '*': printf("%d",op1*op2);
                 break; 
       case '/': printf("%d",op1/op2);
                 break;  
       case '%': printf("%d",op1%op2);
                 break;
        default: printf("Enter a valid operator")  ;       
   }
   printf("\n###\n");
    return 0;
}


