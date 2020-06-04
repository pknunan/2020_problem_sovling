#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int x11, y11, x12, y12, x21, y21, x22, y22, length, height;

	scanf("%d %d %d %d %d %d %d %d", &x11, &y11, &x12, &y12, &x21, &y21, &x22, &y22);

	if (x11 > x12){
		int tmp = x11;
		x11 = x12;
		x12 = tmp;
	}
	if (y11 > y12){
		int tmp = y11;
		y11 = y12;
		y12 = tmp;
	}
	if (x21 > x22){
		int tmp = x21;
		x21 = x22;
		x22 = tmp;
	}
	if (y21 > y22){
		int tmp = y21;
		y21 = y22;
		y22 = tmp;
	}

	if (x11 <= x21 && x21 <= x12 && x12 <= x22)
		length = x12 - x21;
	else if (x11 <= x21 && x21 <= x22 && x22 <= x12)
		length = x22 - x21;
	else if (x21 <= x11 && x11 <= x12 && x12 <= x22)
		length = x12 - x11;
	else if (x21 <= x11 && x11 <= x22 && x22 <= x12)
		length = x22 - x11;
	else
		length = 0;

	if (y11 <= y21 && y21 <= y12 && y12 <= y22)
		height = y12 - y21;
	else if (y11 <= y21 && y21 <= y22 && y22 <= y12)
		height = y22 - y21;
	else if (y21 <= y11 && y11 <= y12 && y12 <= y22)
		height = y12 - y11;
	else if (y21 <= y11 && y11 <= y22 && y22 <= y12)
		height = y22 - y11;
	else
		height = 0;

	printf("%d", length * height);

	return 0;
}