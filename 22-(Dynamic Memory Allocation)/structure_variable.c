// Allocate dynamic memory for structure variable.
#include <stdio.h>
#include <stdlib.h>
struct book
{
    char name[50];
    float price;
};
void main()
{
    struct book *bookp;
    bookp = (struct book *)malloc(sizeof(struct book));
    if (bookp == NULL)
    {
        printf("Memory allocation faild");
    }
    printf("Enter name : ");
    scanf("%s", bookp->name);
    printf("Enter price : ");
    scanf("%f", &bookp->price);
    printf("book details\n");
    printf("Name:%s\n", bookp->name);
    printf("price:%f\n", bookp->price);
    free(bookp);
}