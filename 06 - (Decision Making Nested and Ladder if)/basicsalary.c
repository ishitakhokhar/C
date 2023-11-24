// Enter basic salary of an employee and calculate Gross salary according to given conditions:
//- Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
//- Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
//- Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic
#include <stdio.h>
void main()
{
	float bs, hra, da, gs;
	printf("enter basic salary");
	scanf("%f", &bs);
	if (bs >= 30000)
	{
		hra = bs * 0.3;
		da = bs * 0.95;
	}
	else if (bs >= 20000)
	{
		hra = bs * 0.25;
		da = bs * 0.9;
	}
	else if (bs >= 10000)
	{
		hra = bs * 0.2;
		da = bs * 0.8;
	}
	else
	{
		hra = bs * 0.15;
		da = bs * 0.7;
	}
	gs = bs + hra + da;
	printf("gross salary=%f", gs);
}
