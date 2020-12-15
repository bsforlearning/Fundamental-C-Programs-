/******************************************************************************
@Bhavanishankar 

demonstration of switch case statements  

*******************************************************************************/
#include <stdio.h>
 
int main () {

   /* local variable definition */
   char grade;
   printf("Enter your grade to get the compliments\n");
   scanf("%c", &grade);

   switch(grade) {
      case 'A'||'a':
         printf("Excellent!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   
   printf("Your grade is  %c\n", grade );
 
   return 0;
}
