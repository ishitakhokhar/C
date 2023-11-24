// Read n numbers from user and print in normal and reverse order.
#include <stdio.h>
void main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        printf("enter an array element : ");
        scanf("%d", &arr[i]);
    }
    printf("Normal Order : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("Reverse Order : ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
