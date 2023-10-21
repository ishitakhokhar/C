#include <stdio.h>
void main()
{
    int i, j, count = 0;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j < i; j++)
        {
            count++;
            if (count % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
                }
        printf("\n");
    }
}