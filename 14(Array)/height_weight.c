// Read five person height and weight and count the number of person having height greater than 170 and
// weight less than 50.
#include <stdio.h>
void main()
{
    int n, count = 0;
    printf("Enter height and weight : ");
    scanf("%d", &n);
    int i, height[5], weight[5];
    for (i = 0; i < 5; i++)
    {
        printf("height");
        scanf("%d", &height[i]);
        printf("weight");
        scanf("%d", &weight[i]);
    }
    for (i = 0; i < 5; i++)
        ;
    if (height[i] > 170 && weight[i] < 50)
    {
        count++;
    }
    printf("height and weight=%d", count);
}