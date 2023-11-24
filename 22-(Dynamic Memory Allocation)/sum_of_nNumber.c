// Calculate the sum of n numbers entered by the user using calloc().
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i, sum = 0;
    int *number;
    printf("Enter value of n :");
    scanf("%d", &n);
    number = (int *)calloc(n, sizeof(int));
    if (number == NULL)
    {
        printf("Memmory allocation faild");
    }
    printf("Enter %d number:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
        sum += number[i];
    }
    printf("sum of %d number id :%d\n", n, sum);
    free(number);
}