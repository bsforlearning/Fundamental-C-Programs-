/******************************************************************************
@ Bhavanishankar

program to detect the COVID, gives you the idea of if and logical operators 

*******************************************************************************/
#include <stdio.h>

int main()
{
   int age, det_cough,det_travel,det_smoking;
    printf("Hello World\n");
    printf(" Please give me details, let me tell you how safe you are \n");
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Enter 1 if u have cough/ 0 if you do not\n");
    scanf("%d",&det_cough);
    printf("Enter 1 if you have travel history by air/ 0 if you do not\n");
    scanf("%d", &det_travel);
    printf("Enter 1 if you smoke ( Smoking kills !!!!!)/ 0 if you dont (you live longer!!!!)\n");
    scanf("%d", &det_smoking);
    if(!(age<10 && age>60) && (!det_cough) && (!det_travel) && (!det_smoking))
       printf(" You are safe, yet stay home .. going out? wear mask.... etc\n");
        else 
        printf(" You are at risk !!!!!\n");
    printf("Thank you for taking this assessment!!!!\n");    

    return 0;
}

