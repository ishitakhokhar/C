// number is even number or odd number using conditional operator.
#include <stdio.h>
void main()
{
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	(num % 2 == 0) ? printf("even") : printf("odd");
}
