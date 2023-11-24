// Create a structure book with book title, author, publication, and price.Read data of 3 books and display.
#include <stdio.h>
struct book
{
    char title[20], author[20], publication[20];
    float price;
};

void main()
{
    struct book b[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\n\tEnter title : ");
        scanf("%s", b[i].title);
        printf("\n\tEnter author: ");
        scanf("%s", b[i].author);
        printf("\n\tEnter publication : ");
        scanf("%s", b[i].publication);
        printf("\n\tEnter price : ");
        scanf("%f", &b[i].price);
    }
    for (i = 0; i < 3; i++)
    {
        printf("title=%s\n", b[i].title);
        printf("author=%s\n", b[i].author);
        printf("publication=%s\n", b[i].publication);
        printf("price=%f\n", b[i].price);
    }
}
