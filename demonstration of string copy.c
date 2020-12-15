/***********************************************************
 @Bhavanishankar 
 
This program copies the contents of one string into another. 
The base addresses of the source and target strings should be supplied to this function 
 
******************************************************************/
#include <stdio.h>
void string_copy(char tgt[], char src[])
{
     int i=0;
     while(src[i]!='\0')
    {
        tgt[i]=src[i];
        i++;
    }
    tgt[i]='\0';
}
int main()
{
    printf("\t\tString copy\n");
    char str1[10], str2[10];
    int i=0;
    printf("Enter the string 1\t");
    gets(str1);
    printf("The first string is %s\n", str1);
    string_copy(str2, str1);
    printf("The second string is %s\n", str2);
    return 0;
}

