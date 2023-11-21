//Find factorial of a number using function and recursive function.
#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
};
int main()
{
	int n,ans;
	
	printf("Enter a value:");
	scanf("%d",&n);
	
	ans=fact(n);
	
	printf("Factorial=%d",ans);
	
	return 0;
}