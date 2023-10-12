// number of days in a month considering leap year using switch.
#include <stdio.h>
void main()
{
	int month, year, days;
	printf("Enter month : ");
	scanf("%d", &month);
	printf("Enter year : ");
	scanf("%d", &year);
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31 days");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30 days");
		break;
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("29 days");
			break;
		}
		else
		{
			printf("28 days");
			break;
		}
	default:
		printf("Invalid");
	}
}
