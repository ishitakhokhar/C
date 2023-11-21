// Swap value of two numbers using pointer.
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

    *p = *p + *pb;
    *pb = *p - *pb;
    *p = *p - *pb;

    printf("a=%d\nb=%d", *p, *pb);
}