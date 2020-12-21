/******************************************************************
 
 @Bhavanishankar
 
 demonstration of stack operations using structure  
 
 **********************************************************************/
 #include <stdio.h>
#define SIZE 20
#define TRUE 1 
#define FALSE 0
struct book
{
    int book_id;
    char title[10];
    char author[10];
    float price;
    int no_pages;
};
void push(struct book, int *, struct book[]);
struct book  pop(int *, struct book []);
struct book peep(int , struct book []);
void display(int , struct book []);
int stackfull(int *);
int stackempty(int *);

int main()
{
    struct book stack[SIZE], ele;
    int  choice, item;
    int top=-1;
    struct book pop_item, peep_item;
    for(;;)
    {
        printf("\tEnter 1 for push, 2 for pop  3 for pip and 4 for display 5 for exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: if(stackfull(&top))
                      {
                          printf("The Stack is full\n");
                          break;
                      }
                   printf("Enter the book id title, author name, price and number of pages in order\n");
                    scanf("%d%s%s%f%d", &ele.book_id, ele.title, ele. author, &ele.price, &ele.no_pages);
                    push(ele,&top,stack);
                    break;
             case 2: if (stackempty(&top))
                     {
                          printf(" The stack is empty \n");
                          break;
                     }
                     pop_item=pop(&top, stack);
                     printf("The detailes of popped record are\n");
                     printf("%d\t %s\t %s\t %.2f\t %d\n", pop_item.book_id, pop_item.title, pop_item.author, pop_item.price, pop_item.no_pages);
                     
                     break;       
            case 3: if (stackempty(&top))
                     {
                          printf(" The stack is empty \n");
                          break;
                     }
                     peep_item=peep(top, stack);
                     printf("The item at the top of the stack is\n");
                     printf("%d\t %s\t %s\t %.2f\t %d\n", peep_item.book_id, peep_item.title, peep_item.author, peep_item.price, peep_item.no_pages);
                     break;
            case 4 : if (stackempty(&top))
                     {
                          printf(" The stack is empty \n");
                          break;
                     }
                     printf("The content of the stack are \n");
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

void push(struct book ele, int *tos, struct book stack[])
{
    *tos=*tos+1;
    stack[*tos]=ele;
    // stack[(*(++top)]=item;
}

struct book pop(int *tos, struct book stack[])
{
    struct book item_popped= stack[*tos];
    *tos=*tos-1;
    return item_popped;
    //return stack[(*top--)];
}
struct book peep(int tos,struct book stack[])
{
    return stack[tos];
}

void display(int tos, struct book stack[])
{
   printf("******************************************\n");
   printf("Bppk_Id\t Title\t Author\t Price\t No_pages\n");
   printf("******************************************\n");
   for (int i=tos; i>=0; i--)
    {
        printf("%d\t %s\t %s\t %.2f\t %d\n", stack[i].book_id, stack[i].title, stack[i].author, stack[i].price, stack[i].no_pages);
    }
}

