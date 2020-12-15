/******************************************************************************
@Bhavanishankar 

check whether the entered character is an alphabet or not  

*******************************************************************************/
#include <stdio.h>

int main()
{
char c;
printf("Enter a character\n");
scanf("%c", &c);
(c>='a' && c<='z') || (c>='A' && c<='Z')? printf("Alphabet"):printf("Not an alphabet");
    return 0;
}


