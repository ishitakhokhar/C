#include <stdio.h>
void main()
{
    int fahrenheit, celsius;
    printf("Enter fahrenheit");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%d", celsius, celsius);
}