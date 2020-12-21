/******************************************************************************
@Bhavanishankar 

 return the word count  in a given sentence 
 ascii for space is 32


*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
     
    char mystr[50] = "every exampl is unique in its own way";
    int wordcount=1;
    int i=0;
    while(mystr[i]!='\0')
    {
        if((mystr[i]==' ') || (mystr[i]=='\n') || (mystr[i]=='\t'))
           wordcount=wordcount+1;
        i++;
    }
    
    printf("Number of words in the given string is %d\t", wordcount);
    return 0;
}
