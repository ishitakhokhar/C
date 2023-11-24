// Count total number of negative elements in array.
#include <stdio.h>
void main()
{
    int n, i, count = 0;
    printf("Enter elements : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter number : ");
        scanf("%d", &arr[i]);
        if (arr[i] < 0)
        {
            count++;
        }
    }
    printf("Total negtive number\n=%d", count);
}