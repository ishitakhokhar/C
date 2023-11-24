// equality of two numbers without using arithmetic or comparison operator
 #include<stdio.h>
void main()
{
	int num1,num2;
	printf("Enter number : ");
	scanf("%d %d",&num1,&num2);
	if(!(num1^num2))
	{
		printf("equle number");
	}
	else
	{
		printf("not Equle");
	}
	
}
