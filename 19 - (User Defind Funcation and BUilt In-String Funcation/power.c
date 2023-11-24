//  Find power of any number using recursion.
#include <stdio.h>

int power(int x, int n)
{
    // If x^0 return 1
    if (n == 0)
        return 1;

    // If we need to find of 0^y
    if (x == 0)
        return 0;
    // For all other cases
    return x * power(x, n - 1);
}
void main()
{
    int x, n, result;
    printf("Enter base number : ");
    scanf("%d", &x);
    printf("Enter power : ");
    scanf("%d", &n);
    result = power(x, n);
    printf("%d", result);
}