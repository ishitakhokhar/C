// Find factorial of the given number.
#include <stdio.h>
void main()
{
    int i = 1, n, fact = 1;
    printf("Enter Number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("factorial of%d is: %d", n, fact);
}
