// Print all uppercase and lowercase alphabets.
#include<stdio.h>
void main()
{
	char ch='A';
	printf("Uppercas Alphabets : ");
	while(ch<='Z')
	{
		printf("%c",ch);
		ch++;
	}
	ch='a';
	printf("\nLowercase Alphabets : ");
	while(ch<='z')
	{
		printf("%c",ch);
		ch++;
	}
	
}
