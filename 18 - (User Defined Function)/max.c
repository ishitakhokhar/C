//  Return the maximum of three floating-point numbers.
#include <stdio.h>
float max(float a, float b, float c)
{
    float max;
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else if (c > a && c > b)
    {
        max = c;
    }
    return max;
};
void main()
{
    float a, b, c, ans;

    printf("Enter number a:");
    scanf("%f", &a);
    printf("Enter number b:");
    scanf("%f", &b);
    printf("Enter number c:");
    scanf("%f", &c);

    ans = max(a, b, c);

    printf("Maximum=%f", ans);
}