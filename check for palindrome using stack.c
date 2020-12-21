/******************************************************************
 
 @Bhavanishankar
 
 check for palindrome using stack 
 
 **********************************************************************/#include<stdio.h>

void push(int *tos, char s, char stack[])
{

   stack[++(*tos)]=s;    
}
char pop(int *tos, char stack[])
{
    return stack[(*tos)--];
}
int main()
{
    char str[20];
    int mid, itr;
    int top=-1;
    char stack[20];
    char pp;
    printf("Enter a string\n");
    scanf("%s",str);
    mid =strlen(str)/2;
    for(itr=0;itr<mid;itr++)
    {
        push(&top, str[itr], stack);
    }
    
    if (strlen(str)%2 !=0)
    {
        itr++;
    }
    
    while (str[itr]!='\0')
    {
        pp=pop(&top, stack);
        if (pp==str[itr])
         {  
             itr++;
             continue;
         }
        else break;
    }
    if(str[itr]=='\0')
         printf("Th given string %s is a plindrome\n", str);
    else
         printf("Th given string %s is not a plindrome\n", str);
}
