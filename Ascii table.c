/******************************************************************************

@Bhavanishankar

Ascii table 

*******************************************************************************/
#include <stdio.h>

int main()
{
  int i=0;
    printf("the ascii values are \n");
    while (i<256)
    {
        printf("%d  %c", i, i);
        printf("\n");
        i++;
    }
     

    return 0;
}

