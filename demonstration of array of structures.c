/******************************************************************
 
 @Bhavanishankar
 
 demonstration of array of structures 
 
 **********************************************************************/
 #include <stdio.h>
struct book
{
    char title[10];
    char author[10];
    float price;
    int no_pages;
};
struct book bk[10];// array of structures 
int main()
{
    int no_books,itr;
    char new_title[20];
    float New_price;
    printf("arrays of Structure Demo\n");
    printf("Enter the number of books\n");
    scanf("%d", &no_books);
    printf("Enter the title, author name, price and number of pages in order");
    for(itr=0;itr<no_books; itr++)
        scanf("%s%s%f%d", bk[itr].title, bk[itr].author, &bk[itr].price, &bk[itr].no_pages);
    printf("******************************************\n");
    printf("Title\t Author\t Price\t No_pages\n");
    for(itr=0;itr<no_books; itr++)
        printf("%s\t %s\t %f\t %d\n", bk[itr].title, bk[itr].author, bk[itr].price, bk[itr].no_pages);  
     printf("******************************************\n");
     printf("enter the title of the book whose price needs to be changed  and mention the new amount");
     scanf("%s%f", new_title, &New_price);
     for(itr=0;itr<no_books; itr++)
     {
        if(!(strcmp(bk[itr].title, new_title)))
        {
           printf("\n\t\t\t\t\I am here\n");
            bk[itr].price=New_price;
            break;
        }
     }
    printf("Title\t Author\t Price\t No_pages\n");
    for(itr=0;itr<no_books; itr++)
        printf("%s\t %s\t %f\t %d\n", bk[itr].title, bk[itr].author, bk[itr].price, bk[itr].no_pages); 
    return 0;
}




