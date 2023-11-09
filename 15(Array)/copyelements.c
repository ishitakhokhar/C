//  Copy all elements of one array to another
#include <stdio.h>
void main()
{
    int i, n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter [%d]th element : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("Original Array\n");
    for (i = 0; i < n; i++)
    {
        printf("element %d : %d\n", i, arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("Copied Array\n");
    for (i = 0; i < n; i++)
    {
        printf("element %d : %d\n", i, arr2[i]);
    }
}