// Store n elements in an array and print the elements using pointer.
#include <stdio.h>
void main()
{
    int *p, i, n;
    int arr[n];

    printf("Enter array element:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        p = &arr[i];
        printf("%d", *p);
    }
}
