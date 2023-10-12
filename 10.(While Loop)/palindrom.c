// Check whether the given number is palindrome or not.
#include <stdio.h>
void main()
{
    int n, remainder, reversed = 0, original;
    printf("Enter Number : ");
    scanf("%d", &n);
    original = n;
    while (n != 0)

    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
    {
        printf("%d is palindrom", original);
    }
    else
    {
        printf("%d is not palindrom", original);
    }
}
