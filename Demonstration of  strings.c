/***********************************************************
 @Bhavanishankar 
 
 Demonstration of  strings  
 
 ******************************************************************/
#include <stdio.h>

int main()
{
   // char name[]={'B','H','A','R','A','T','H'};
    //char name[]={'B','H','A','R','A','T','H','\0'};
    char name[]="BHARATH";
   // puts(name);
   // printf("\t%d", strlen(name));
   int i=0;
  // while(i<7)
  while(name[i]!='\0')
   
   {
       printf("%c", name[i]);
       i++;
   }
    return 0;
}

