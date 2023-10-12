#include <stdio.h>
void main()
{
	char ch;
	printf("enter char");
	scanf(" %c", &ch);
	if (ch >= 'A' && ch <= 'z')
	{

		printf("Uppercase character");
	}
	else if (ch >= 'a' && ch <= 'b')
	{
		printf("lowercase character");
	}
	else if (ch >= '0' && ch <= '9')
	{
		printf("Digit character");
	}
	else
	{
		printf("special character");
	}
}
