// Calculate 𝑥^𝑦 without using power function.
#include <stdio.h>
void main()
{
    int x, y, pow = 1, i;
    printf("Enter Number : ");
    scanf("%d %d", &x, &y);
    for (i = 1; i <= y; i++)
    {
        pow *= x;
    }
    printf("power=%d", pow);
}