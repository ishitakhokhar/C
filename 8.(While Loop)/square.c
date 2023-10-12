// Calculate the square of integers 1 through 10.
#include <stdio.h>
void main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d  %f\n", i, pow(i, 2));
		i++;
	}
}
