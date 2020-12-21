/******************************************************************
 
 @Bhavanishankar
 
 linked lists demo 
 
 **********************************************************************/
 #include <stdio.h>
struct NODE
{
    int data;
    struct NODE * link;
};
int main()
{
  
  int *ptr1=(int  *) malloc (3*sizeof(int))
  int * ptr= (int *) calloc (3, sizeof(int))  
   
   
   
   struct NODE *first, *second, *third, *extra, *ptr;
   first =(struct NODE*)malloc(sizeof(struct NODE));
   second =(struct NODE*)malloc(sizeof(struct NODE));
   third =(struct NODE*)malloc(sizeof(struct NODE));
   extra=(struct NODE*)malloc(sizeof(struct NODE));
   printf(" The address of node is %u\n", first);
    printf(" The address of node is %u\n", second);
     printf(" The address of node is %u\n", third);
   printf("Enter a value for first second and third node\n");
   scanf("%d%d%d", &(first->data), &(second->data), &(third->data));
   first->link=second;
   second->link=third;
   third->link=NULL;
   printf("Enter the value for extra node \n");
   scanf("%d", &(extra->data));
   
  printf("The content of the list is \n");
 //  printf("%d-->>%d-->>%d-->>", first->data, second->data,third->data);
 //  printf("AFter introducing the exta node \n");
   first->link=extra;
   extra->link=second ;
   //printf("%d-->>%d-->>%d-->>%d", first->data, extra->data, second->data,third->data);
   ptr=first;
   while(ptr!=NULL)
   {
      
       printf("%d-->", ptr->data);
       ptr=ptr->link;
       
   }
    printf("\n%d-->", first->data);
    return 0;
}



