// Get 10 numbers from user print count of odd, even numbers
#include <stdio.h>
void main()
{
	int i = 1, even = 0, odd = 0, n;
	while (i <= 10)
	{
		printf("Enter a numbers : ");
		scanf("%d", &n);

		if (n % 2 == 0)
		{

			even++;
		}
		else if (n % 2 != 0)
		{

			odd++;
		}
		i++;
	}

	printf("even=%d\nodd=%d\n", even, odd);
}
