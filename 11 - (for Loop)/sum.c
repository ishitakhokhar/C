// Print sum of 1 to n numbers.
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("Enter Number : ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
}