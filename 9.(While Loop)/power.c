// Calculate x^y without using power function.
#include<stdio.h>
void main()
{
	int x,y,pow=1;
	printf("Enter Number : ");
	scanf("%d %d",&x,&y);
	while(y>0){
		pow *= x;
		y--;
	}
	printf("Power : %d",pow);
}
