//  Add two numbers using function.
#include <stdio.h>
int sum(int a, int b)
{
    int ans;
    ans = a + b;
    return ans;
};
int main()
{
    int a, b, ans;

    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter a number:");
    scanf("%d", &b);

    ans = sum(a, b);

    printf("sum=%d", ans);
}