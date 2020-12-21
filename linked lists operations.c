/******************************************************************
 
 @Bhavanishankar
 
 linked lists operations 
 
 **********************************************************************/
 #include<stdlib.h>
#include <stdio.h>
struct NODE
{
    int data;
    struct NODE * link;
};

   
  void addfront(int item, struct NODE**first)
  {
      printf("%u", *first);
      if(*first==NULL)
      {
         *first =(struct NODE*)malloc(sizeof(struct NODE));
         (*first)->data=item;
         (*first)->link=NULL;
         printf("in the function %u\t", *first);
          printf("I am here at  null\n");
         return;
      }
      struct NODE *temp=(struct NODE*)malloc(sizeof(struct NODE));
      temp->data=item;
      temp->link=*first;
      printf("I am here at not null\n");
      *first=temp;
  }
  void addrear(int item, struct NODE**first)
  {
     struct NODE *cur=NULL;
      if(*first==NULL)
      {
         *first =(struct NODE*)malloc(sizeof(struct NODE));
         (*first)->data=item;
         (*first)->link=NULL;
         printf("in the function %u\t", *first);
          printf("I am here at  null\n");
         return;
      }
      struct NODE *temp=(struct NODE*)malloc(sizeof(struct NODE));
      temp->data=item;
      temp->link=NULL;
      cur=*first;
      while(cur->link!=NULL)
          cur=cur->link;
      cur->link=temp;
      printf("I am here at not null\n");
 }
   
  void display(struct NODE *first)
  {
   struct NODE *ptr=NULL;
   ptr=first;
  if (first==NULL)
     {
         printf("the lsit is empty\n");
         return;
     }
  while(ptr!=NULL)
   {
       printf("%d-->", ptr->data);
       ptr=ptr->link;
   }
  }
  
int main()
{
   struct NODE *first=NULL;
   int item,ch;
   for(;;)
   {
       printf("Enter a choice 1 to add front 2 add rear 3  to display 3 to exit\n");
       scanf("%d", &ch);
       switch(ch)
       {
           case 1 : printf("Enter the data to be isnerted at front of the list \n");
                    scanf("%d", &item);
                    addfront(item, &first);
                    printf("in the main %u\t", first);
                    break;
            case 2 : printf("Enter the data to be isnerted at rear of the list \n");
                    scanf("%d", &item);
                    addrear(item, &first);
                    printf("in the main %u\t", first);
                    break;
            case 3:display(first);
                   break;
            case 4: exit(0);
       }
   }
return 0;
}

