// Find out sum of first and last digit of a given number.
#include <stdio.h>
void main()
{
	int firstdigit, lastdigit, num, sum;
	printf("Enter Number : ");
	scanf("%d", &num);
	lastdigit = num % 10;
	while (num >= 10)
	{
		num = num / 10;
		firstdigit = num;
		sum = firstdigit + lastdigit;
		}
	printf("sum:%d", sum);
}
