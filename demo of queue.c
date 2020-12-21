/******************************************************************
 
 @Bhavanishankar
 
 demo of queue 
 
 **********************************************************************/
 #include <stdio.h>
#define SIZE 20
#define TRUE 1 
#define FALSE 0
void insert(int, int *, int[]);
int delete(int *, int []);
void display(int [], int, int );
int queuefull(int );
int queueempty(int, int );

int main()
{
    int queue[SIZE], choice, item;
    int front=0, rear=-1;
    int del_item;
    for(;;)
    {
        printf("\tENter 1 for insert, 2 for delete   and 4 for display   5 for exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: if(queuefull(rear))
                      {
                          printf("The queue is full\n");
                          break;
                      }
                    printf("Enter the item to be inserted \n");
                    scanf("%d", &item);
                   insert(item,&rear,queue);
                    break;
            case 2: if (queueempty(front, rear))
                     {
                          printf(" The queue is empty \n");
                          break;
                     }
                     del_item=delete(&front, queue);
                     printf("The item %d is deleted \n", del_item);
                     break;
            
            case 4 : if (queueempty(front, rear))
                     {
                          printf(" The queue is empty \n");
                          break;
                     }
                     printf("The content of the stack are \n");
                     display(queue, front, rear);
                     break;
            case 5:exit(0);
            default: printf("Enter a valid choice\n");
        }
    }

    return 0;
}

int queuefull(int rr)
{
    if(rr==SIZE-1)
      return TRUE;
    return FALSE;
}
int queueempty(int ff, int rr)
{
    if(ff>rr)
      return TRUE;
    return FALSE;
}

void insert(int item, int *rr, int queue[])
{
    *rr=*rr+1;
    queue[*rr]=item;
    // stack[(*(++top)]=item;
}
int delete(int *ff, int queue[])
{
    int item_deleted= queue[*ff];
    *ff=*ff+1;
    return item_deleted;
    //return stack[(*top--)];
}
void display( int queue[], int ff, int rr )
{
    for (int i=ff; i<=rr; i++)
    {
        printf("%d\t", queue[i]);
    }
    printf("\n");
}





