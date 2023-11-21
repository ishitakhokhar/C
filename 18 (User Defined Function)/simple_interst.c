//  Count simple interest using function.
#include <stdio.h>
int si(float p, float r, int t)
{
    float ans;
    ans = (p * r * t) / 100;
    return ans;
};
void main()
{
    float p, r, interst;
    int t;
    printf("Enter principal amount : ");
    scanf("%f", &p);
    printf("Enter rate amount :");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%d", &t);
    interst = (p * r * t);
    printf("simple interst=%f", interst);
}