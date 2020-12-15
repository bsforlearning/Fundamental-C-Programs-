/***********************************************************
 @Bhavanishankar 
 
 Demonstration of 2D array 
 
 ******************************************************************/
 
include <stdio.h>
int main()
{
    int stud[4][2];
    int i;
    printf("Two dimensional array demo\n");
    printf("Enter the details for students\n");
    for(i=0;i<=3;i++)
    {
        printf("Enter roll no and marks for %d student\n", i+1);
        scanf("%d%d", &stud[i][0], &stud[i][1]);
    }
    printf("The details are \n");
        for(i=0;i<=3;i++)
            printf("%d\t%d\n", stud[i][0], stud[i][1]);
    return 0;
}

