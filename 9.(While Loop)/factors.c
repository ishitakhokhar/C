// Find factors of the given number.
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter Number : ");
	scanf("%d",&n);
	printf("Factors of %d\n",n);
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
