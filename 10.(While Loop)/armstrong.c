// Check whether the given number is Armstrong or not.
#include <stdio.h>
#include <math.h>
void main()
{
    int n, r, sum = 0, temp, count, temp1;
    printf("Enter number : ");
    scanf("%d", &n);
    temp = n;
    temp1 = n;
    while (n > 0)
    {
        r = n % 10;
        count++;
        n = n / 10;
    }
    while (temp1 > 0)
    {
        r = temp1 % 10;
        sum = sum + pow(r, count);
        temp1 = temp1 / 10;
    }
    if (sum == temp)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong number");
    }
}