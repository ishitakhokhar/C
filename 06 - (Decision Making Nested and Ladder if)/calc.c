// Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user�s choice.
#include <stdio.h>
void main()
{
	float a, b;
	char choice;
	printf("enter choice : ");
	scanf("%c", &choice);
	printf("enter number : ");
	scanf("%f %f", &a, &b);
	if (choice == '+')
	{
		printf("addition %f", a + b);
	}
	else if (choice == '-')
	{
		printf("substraction %f", a - b);
	}
	else if (choice == '*')
	{
		printf("multiply %f", a * b);
	}
	else if (choice == '/')
	{
		if (b != 0)
		{
			printf("divison %f", a / b);
		}
		else
		{
			printf("can not divied by zero");
		}
	}
	else
	{
		printf("invalid");
	}
}
