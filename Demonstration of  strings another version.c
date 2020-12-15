/***********************************************************
 @Bhavanishankar 
 
 Demonstration of  strings another version  
 
 ******************************************************************/#include <stdio.h>
int main()
{
    char str1[]="India";
    char str2[10];
   // str2=str1;
   char *ptr1="good morning";
   char *ptr2;
   ptr2=ptr1;
   puts(ptr1);
   puts(ptr2);
   // puts(str1);
   // puts(str2);

    return 0;
}

