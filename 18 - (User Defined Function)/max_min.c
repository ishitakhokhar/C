// Find maximum and minimum between two numbers using function.
#include <stdio.h>
int max(int a, int b)
{
    int max, min;
    if (a > b)
    {
        max = a;
        min = b;
    }
    else if (a < b)
    {
        max = b;
        min = a;
    }

    printf("Maximum=%d\n", max);
    printf("Minimum=%d", min);

    return 0;
};
void main()
{
    int ans, a, b;

    printf("Enter number:");
    scanf("%d", &a);
    printf("Enter number:");
    scanf("%d", &b);

    max(a, b);
}