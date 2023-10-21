#include <stdio.h>
void main()
{
    int i, j, k, n = 1, c = 65;
    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= 5; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf(" %d", n);
                n++;
            }
            else
            {
                printf(" %c", c);
                c++;
            }
        }
        printf("\n");
    }
}