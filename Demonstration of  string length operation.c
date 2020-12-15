/***********************************************************
 @Bhavanishankar 
 
 Demonstration of  string length operation   
 
 ******************************************************************/
 #include <stdio.h>
int main()
{
    char str1[]="India";
    char *str2="Bharath";
    int len1=strlen(str1);
    int len2=strlen(str2);
    int len3=strlen("Hello how are you?");
    printf("String length\n");
    printf("%d\t%d\t%d", len1,len2,len3);
    
   

    return 0;
}

