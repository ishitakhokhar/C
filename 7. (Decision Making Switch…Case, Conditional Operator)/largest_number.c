#include <stdio.h>
void main()
{
	int a, b, c, largest;
	printf("Enter three number : ");
	scanf("%d%d%d", &a, &b, &c);
	largest = a > b ? (a > c ? a : c) : (b > c ? b : c);
	printf("%d is largest number", largest);
}
