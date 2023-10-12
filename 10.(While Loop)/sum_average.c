#include <stdio.h>
void main()
{
    int num, i = 0, sum = 0, n;
    float avg;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Enter number you want : ");
    while (i < n)
    {
        scanf("%d", &num);
        sum = sum + num;
        i++;
    }
    avg = sum / n;
    printf("sum of number %d=%d", n, sum);
    printf("average of %d numbers= %f", n, avg);
}