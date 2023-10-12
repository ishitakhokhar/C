#include<stdio.h>
void main()
{
	int side1,side2,side3;
	printf("Enter three side of tringle : ");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1==side2 && side2==side3 && side3==side1)
	{
		printf("Tringle is equilateral");
	}
	else if(side1==side2||side2==side3||side3==side1)
	{
		printf("Tringle is isosceles");
	}
	else if ((side1*side1 + side2*side2 == side3*side3)||(side1*side1 + side3*side3 == side2*side2)||(side2*side2 + side3*side3 == side1*side1))
	{
		printf("Tringle is right angle");	
	}
	else
	{
		printf("Tringle is scalene");
	}
}
