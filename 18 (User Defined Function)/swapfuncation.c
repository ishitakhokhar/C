// Swap two numbers using call by value and call by reference.

#include <stdio.h>
int swap(int a, int b) // call by value
{
    int z;
    z = a;
    a = b;
    b = z;

    printf("After swapping:a=%d\tb=%d\n", a, b);

    return 0;
};
int main()
{
    int a, b;

    printf("Enter number a:");
    scanf("%d", &a);
    printf("Enter number b:");
    scanf("%d", &b);
    swap(a, b);

    printf("Before swapping:a=%d\tb=%d\n", a, b);

    return 0;
}
// call by reference
int swap(int *a, int *b)
{
    int z;
    z = *a;
    *a = *b;
    *b = z;

    printf("After swapping:a=%d\tb=%d\n", *a, *b);

    return 0;
};
int main()
{
    int a, b;

    printf("Enter number a:");
    scanf("%d", &a);
    printf("Enter number b:");
    scanf("%d", &b);
    swap(&a, &b);

    printf("Before swapping:a=%d\tb=%d\n", a, b);

    return 0;
}