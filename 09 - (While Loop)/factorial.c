// Find factorial of the given number
#include<stdio.h>
void main()
{
	int i=1,n,fact=1;
	printf("Enter Number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		fact*=i;
		i++;
	}
	printf("number of fact%d is:%d",n,fact);
	
	
}
