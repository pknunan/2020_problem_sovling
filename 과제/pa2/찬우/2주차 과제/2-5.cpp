#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int year1, year2, month1, month2, day1, day2;

	scanf("%d %d %d %d %d %d", &year1,&month1, &day1, &year2, &month2, &day2);

	if (year1 < year2)
		printf("-1\n");
	else if (year1 > year2)
		printf("1\n");
	else if (month1 < month2)
		printf("-1\n");
	else if (month1 > month2)
		printf("1\n");
	else if (day1 < day2)
		printf("-1\n");
	else if (day1 > day2)
		printf("1\n");
	else
		printf("0\n");
	return 0;
}