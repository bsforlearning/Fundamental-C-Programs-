/***********************************************************
 @Bhavanishankar 
 
Number game  :: guess a number and if tis a digit accept, 
if its done stop otherwose accept the next number and find largest and smallest 
**************************************************************/

#include<stdio.h>
int isnumber(char *str)
{
   int i=0,flag;
   while(*str!='\0')
    {
        flag=isdigit(*(str+i));
        if(flag)
        return 1;
        else return 0;
    }
}
int main() {
   char str[10]; 
   int i, smallest=9999, largest =-9999;
  while(1)
  {
   printf("enter an input -> string, number or done");
   scanf("%s", str);
   if(isnumber(str))
    {
         i=atoi(str); // "123" -> 123
         if(i>largest)
         largest=i; 
         
         if(i<smallest)
         smallest=i;  
     }
  else if(!strcmp(str,"done"))
   {
       break;
   }
  else  continue;
  }
   printf("Max= %d \t Min =%d", largest, smallest);
 }


