#include <stdio.h>
void main()
{
    int radius, area;
    printf("Enter the value of radius");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf("%d, area of circle", area);
}