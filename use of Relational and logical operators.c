/*
@Bhavanishankar
 use of Relational and logical operators */
#include <stdio.h>

int main()
{
    int a=10, b=4, c=10, d=20;
    printf("Result of less than: %d\n", a<b);
     printf("Result of less than: %d\n", a<d); 
    printf("relational and logical: %d\n", (a>b)&&(c<d));
    printf("relational and logical: %d\n", (a>b)||(!a));
    printf("relational and logical: %d\n", (a<b)||(a<d)&&d);
    return 0;
}


