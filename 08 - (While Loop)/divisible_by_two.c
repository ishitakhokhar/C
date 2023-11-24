//Print numbers between two given numbers which is divisible by 2.
#include<stdio.h>
int main()
{
	int a,b,i,temp;
	
	printf("Enter a number:");
	scanf("%d",&a);
	
	printf("Enter a number:");
	scanf("%d",&b);
	
	if(a>b)
	{
	  temp=a;
	  a=b;
	  b=temp;	
	}
	
	i=a;
	
	while(i<=b)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
} 