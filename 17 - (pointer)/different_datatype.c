//  Demonstrate int, float, double and char pointer.
#include <stdio.h>
void main()
{
    int a, *p;
    float f, *fp;
    double d, *dp;
    char c, *cp;

    printf("Enter interger number : ");
    scanf("%d", &a);
    printf("Enter float number : ");
    scanf("%f", &f);
    printf("Enter double number : ");
    scanf("%lf", &d);
    printf("Enter characte : ");
    scanf(" %c", &c);

    p = &a;
    fp = &f;
    dp = &d;
    cp = &c;

    printf("int value=%d\naddress=%d\n", *p, p);
    printf("float value=%f\naddress=%d\n", *fp, fp);
    printf("double value=%lf\naddress=%d\n", *dp, dp);
    printf("char value=%c\naddress=%d\n", *cp, cp);
}