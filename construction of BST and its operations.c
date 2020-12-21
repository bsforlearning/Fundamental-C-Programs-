/******************************************************************************
@Bhavanishankar 

 construction of BST and its operations 


*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct NODE
{
    int data;
    struct NODE *rlink;
    struct NODE *llink;
};
struct QUEUE
{
    struct NODE*ptr;
    struct QUEUE *next;
};
struct NODE* getnode()
{
    struct node* node=(struct NODE*)malloc(sizeof(struct NODE));
    if(node==NULL)
    {
        printf("No Memory \n");
        exit(0);
    }
    return node;
}
struct NODE* insert(int val, int *rt)
{
    struct NODE *temp=NULL, *node=NULL, *prev=NULL;
    if (rt==NULL)   // first insertion 
        {
            struct NODE *node=getnode();
            node->data=val;
            node->rlink=NULL;
            node->llink=NULL;
            printf(" \t\t\t\t\t\tfor the first i did my job\n");
            return node;
        }
    temp=rt;
    while(temp!= NULL)
    {
       prev=temp;
       if(val<temp->data)
          temp=temp->llink;
          else
          temp=temp->rlink;
    }
   if (val<prev->data)   // left sub tree 
   {
        node=getnode();
        node->data=val;
        node->llink=NULL;
        node->rlink=NULL;
        prev->llink=node;
        return rt;
   }
   
        node=getnode();   // right subtree
        node->data=val;
        node->llink=NULL;
        node->rlink=NULL;
        prev->rlink=node;
        return rt;
}

void search(int key, struct NODE *rt)
{
    if (rt->data==key)
    {
        printf("SUCCESS \n");
        return;
    }
    struct NODE *temp=rt;
    while(temp!=NULL && temp->data!=key)
    {
        if (key>temp->data)
            temp=temp->rlink;
         else
        temp=temp->llink;
    }
    if (temp==NULL) 
    {
        printf("\t\tFAIL\n");
        return;
    }
    printf("\t\tSUCCESS\n");
    return;
}

void Inorder(struct NODE * root)
{
    if (root == NULL)  // base condition 
        return;
    else {
        Inorder(root->llink);  // traverse LST recursively 
        printf("%d\t", root->data);  // visit the root node 
        Inorder(root->rlink);  // traverse RST recursively 
    }
}
void Preorder(struct NODE * root)
{
    if (root == NULL)  // base condition 
        return;
    else {
        printf("%d\t", root->data);  // visit the root node 
        Preorder(root->llink);  // traverse LST recursively 
        Preorder(root->rlink);  // traverse RST recursively 
    }
}
void Postorder(struct NODE * root)
{
    if (root == NULL)  // base condition
        return;
    else {
        
        Postorder(root->llink);  // traverse LST recursively 
        Postorder(root->rlink);  // traverse RST recursively 
        printf("%d\t", root->data);  // visit the root node 
    }
}
    
int count (struct NODE *root)
{
   static int counter =0;
    if(root!=NULL)
      {
          count(root->llink);
          counter++;
          count(root->rlink);
      }
      return counter;
}
struct NODE* enqueue(struct NODE *node)
{
    
}
struct NODE* dequeue(struct NODE *node)
{
    
}
void levelorder(struct NODE *rt)
{
    
}
int main()
{
    struct NODE *root=NULL;
    int ch, val,key;
    while(1)
    {
        printf("enter your choice\n   1: add node\n   2: search\n   3: Inorder\n   4: Preorder\n   5: Postorder\n   6: exit\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 : printf("Enter the data value to be inserted\n");
                     scanf("%d", &val);
                     root=insert(val, root);
                     break;
            case 2: if(root==NULL)
                        {
                             printf("EMPTY TREE\n");
                        }
                        else
                        printf("Enter the key to be searched \n");
                        scanf("%d", &key);
                        search(key, root);
                        break;
                        display(root);
                        break;
            case 3:  if(root==NULL)
                        {
                             printf("EMPTY TREE\n");
                        }
                        else
                        printf("the Inorder Traversal is \n");   
                        Inorder(root);
                         break;
            case 4:     if(root==NULL)
                        {
                             printf("EMPTY TREE\n");
                        }
                        else
                        printf("the Preorder Traversal is \n");   
                        Preorder(root);
                         break;
            case 5:    if(root==NULL)
                        {
                             printf("EMPTY TREE\n");
                        }
                        else
                        printf("the Postorder Traversal is \n");   
                        Postorder(root);  
                        break;
            case 6:    if(root==NULL)
                        {
                             printf("EMPTY TREE\n");
                        }
                        else
                        printf("Number of nodes in BST is %d\n", count(root));
                        break;
            case 7:   if(root==NULL)
                        {
                             printf("EMPTY TREE\n");
                        }
                        else
                        {
                            levelorder(root);
                        }
            case 8: exit(0);
        }
        
    }

    return 0;
}





