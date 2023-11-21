// Pass an array in function to print array elements.
#include <stdio.h>
void printarray(int a[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
}
void main()
{
    int a[5] = {1, 3, 4, 6, 8};
    printarray(a);
}