// Print digits of given number.
#include <stdio.h>
void main()
{
    int n, r;
    printf("Enter number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        printf("%d\n", r);
        n = n / 10;
    }
}