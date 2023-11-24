// Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n
#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,sum=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			sum=sum-i;
		}
		else
		{
			sum=sum+i;
		}
		i++;
	}
	printf("%d",sum);
}
