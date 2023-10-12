// Check whether character is an alphabet or not using conditional operator
#include <stdio.h>
void main()
{
	char choice, y;
	printf("Enter char : ");
	scanf("%c", &choice);
	y = (char >= 'a' && char <= 'z') || (char >= 'A' && char <= 'Z') ? "Alphabate" : "Not Alphabate";
	printf("%c", y);
}
