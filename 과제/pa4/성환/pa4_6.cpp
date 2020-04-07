#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x1, x2, x3, x4;
	int y1, y2, y3, y4;

	int row = 0, col = 0;

	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

	if (x1 > x2)
	{
		int tmp = x2;
		x2 = x1;
		x1 = tmp;
	}
	if (x3 > x4)
	{
		int tmp = x4;
		x4 = x3;
		x3 = tmp;
	}
	if (y1 > y2)
	{
		int tmp = y2;
		y2 = y1;
		y1 = tmp;
	}
	if (y3 > y4)
	{
		int tmp = y4;
		y4 = y3;
		y3 = tmp;
	}

	for (int i = x1; i < x2; i++)
	{
		if (i >= x3 && i < x4)
			row++;
	}
	for (int i = y1; i < y2; i++)
	{
		if (i >= y3 && i < y4)
			col++;
	}

	printf("%d", row * col);


	return 0;
}