// Perform Addition of two matrices.
#include <stdio.h>
void main()
{
    int i, j, rows, cols;

    printf("Enter size of rows:");
    scanf("%d", &rows);
    printf("Enter size of cols:");
    scanf("%d", &cols);

    int firstmatrix[rows][cols], secondmatrix[rows][cols], resultmatrix[rows][cols];

    printf("Element of first matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &firstmatrix[i][j]);
        }
    }

    printf("Element of second matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &secondmatrix[i][j]);
        }
    }

    printf("Addition of two matrices:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            resultmatrix[i][j] = firstmatrix[i][j] + secondmatrix[i][j];
            printf("%d\t", resultmatrix[i][j]);
        }
        printf("\n");
    }
}