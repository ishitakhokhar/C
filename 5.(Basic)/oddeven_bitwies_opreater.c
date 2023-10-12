#include <stdio.h>
void main()
{
	int num;
	printf("Enter a number");
	scanf("%d", &num);
	if (num & 1 == 1)
	{
		printf("odd");
	}
	else
	{
		printf("even");
	}
}
