// Find whether the given number is prime or not.
#include <stdio.h>
void main()
{
	int n, i = 2, flag = 0;
	printf("Enter Number : ");
	scanf("%d", &n);
	while (i = n / 2)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 0)
		printf("%d is a prime number", n);
	else
		printf("%d is not prime number", n);
}
