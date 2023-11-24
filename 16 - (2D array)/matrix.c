// Read values in two - dimensional array and print them in matrix form.
#include <stdio.h>
void main()
{
    int i, j;
    int arr[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter a value of [%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}