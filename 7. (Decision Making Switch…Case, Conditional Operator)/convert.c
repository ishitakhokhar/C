#include <stdio.h>
#include <stdlib.h>
void main()
{
	char x[10] = "";
	int convert1;
	float convert2;
	printf("Enter value of c : ");
	scanf("%s", &x);

	convert1 = atoi(x);
	printf("integer %d", convert1);
	convert2 = atof(x);
	printf("floating part %f", convert2);
}