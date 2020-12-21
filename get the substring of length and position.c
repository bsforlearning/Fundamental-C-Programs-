/******************************************************************************
@Bhavanishankar 

// get the substring of length and position  

*******************************************************************************/ 
#include <stdio.h>
int main()
{
    char str[20], sub[20];
    int i,len, pos,length;
    printf("Enter a string\n");
    gets(str);
    printf("Input string is \n");
    puts(str);
    printf("Enter the position\n");
    scanf("%d", &pos);
    printf("enter the length of substring that you want");
    scanf("%d", &len);
    i=0;
    while(i<len)
    {
        sub[i]=str[pos-1+i];
        i++;
    }
    
   sub[i]='\0';
   puts(sub);
   return 0;
}

