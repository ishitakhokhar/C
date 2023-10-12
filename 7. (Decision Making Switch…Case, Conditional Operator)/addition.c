#include <stdio.h>
void main()
{

	int a, b;
	char choice;
	printf("enter value:");
	scanf("%d%d", &a, &b);
	printf("enter char:");
	scanf(" %c", &choice);
	switch (choice)
	{
	case '+':
		printf("addition:%d", a + b);
		break;
	case '-':
		printf("substraction:%d", a - b);
		break;
	case '*':
		printf("multiply:%d", a * b);
		break;
	case '/':
		if (b == 0)
		{
			printf("error");
		}
		else
		{
			printf("devided:%d", a - b);
		}
		break;
	default:
		printf("invalid");
	}
}
