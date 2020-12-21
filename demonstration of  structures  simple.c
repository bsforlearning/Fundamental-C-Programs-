/******************************************************************
 
 @Bhavanishankar
 
 demonstration of  structures 
 
 **********************************************************************/
 #include <stdio.h>
struct book
{
    char title[10];
    char author[10];
    float price;
    int no_pages;
}b2={"pqr", "asl",0};
struct book b1={"abc", "asl", 123.4, 45};
int main()
{
    struct book b3=b1;
    printf("Structure Demo\n");
    b1.no_pages=198;
    printf("%s\t%s\t%f\t%d\n", b1.title, b1.author, b1.price, b1.no_pages);
    scanf("%d", &b2.no_pages);
    printf("%s\t%s\t%f\t%d\n", b2.title, b2.author, b2.price, b2.no_pages);
    printf("%s\t%s\t%f\t%d", b3.title, b3.author, b3.price, b3.no_pages);
    b2.no_pages=156;
    return 0;
}




