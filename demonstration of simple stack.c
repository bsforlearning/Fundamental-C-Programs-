/******************************************************************
 
 @Bhavanishankar
 
 demonstration of simple stack  
 
 **********************************************************************/
 #include <stdio.h>
#define SIZE 20
#define TRUE 1 
#define FALSE 0
void push(int, int *, int[]);
int pop(int *, int []);
int pip(int , int []);
void display(int , int []);
int stackfull(int *);
int stackempty(int *);

int main()
{
    int stack[SIZE], choice, item;
    int top=-1;
    int pop_item, peep_item;
    for(;;)
    {
        printf("\tENter 1 for push, 2 for pop  3 for pip and 4 for display\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: if(stackfull(&top))
                      {
                          printf("The Stack is full\n");
                          break;
                      }
                    printf("Enter the item to be pushed\n");
                    scanf("%d", &item);
                    push(item,&top,stack);
                    break;
            case 2: if (stackempty(&top))
                     {
                          printf(" The stack is empty \n");
                          break;
                     }
                     pop_item=pop(&top, stack);
                     printf("The item %d is popped \n", pop_item);
                     break;
            case 3: if (stackempty(&top))
                     {
                          printf(" The stack is empty \n");
                          break;
                     }
                     peep_item=peep(top, stack);
                     printf("The item at the eop of the stack is %d\n", peep_item);
                     break;
            case 4 : if (stackempty(&top))
                     {
                          printf(" The stack is empty \n");
                          break;
                     }
                     printf("The content of the stack are \n")
                     display(top, stack);
                     break;
            case 5:exit(0);
            default: printf("Enter a valid choice\n");
        }
                    
        
    }

    return 0;
}

int stackfull(int *tos)
{
    if(*tos==SIZE-1)
      return TRUE;
    return FALSE;
}
int stackempty(int *tos)
{
    if(*tos==-1)
      return TRUE;
    return FALSE;
}
int peep(int tos,int stack[])
{
    return stack[tos];
}
void push(int item, int *tos, int stack[])
{
    *tos=*tos+1;
    stack[*tos]=item;
    // stack[(*(++top)]=item;
}
int pop(int *tos, int stack[])
{
    int item_popped= stack[*tos];
    *tos=*tos-1;
    return item_popped;
    //return stack[(*top--)];
}
void display(int tos, int stack[])
{
    for (int i=tos; i>=0; i--)
    {
        printf("%d\n", stack[i]);
    }
}



