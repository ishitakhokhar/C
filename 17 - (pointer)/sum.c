// Calculate sum of two numbers using pointer.
#include <stdio.h>
void main()
{
    int a, b, *p, *pb;
    printf("Enter number : ");
    scanf("%d", &a);
    printf("Enter number : ");
    scanf("%d", &b);

    p = &a;
    pb = &b;

    printf("sum=%d", *p + *pb);
}
