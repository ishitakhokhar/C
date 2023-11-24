//Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + �n.
#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,n;
	float sum;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=sum+pow(i,2);
		i++;
	}
	printf("%f",sum);
	return 0;
}