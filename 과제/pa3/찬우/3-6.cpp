#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b, convex = 0, concave = 0, condition = 0;
	scanf("%d %d", &a, &b);

	while (b != -1) {
		if (a < b) {
			if (condition == 1)
				convex++;
			condition = 2;
		}
		if (a > b) {
			if (condition == 2)
				concave++;
			condition = 1;
		}
		a = b;
		scanf("%d", &b);
	}
	if (concave == 0 && convex == 0)
		printf("Both\n");
	else if (concave != 0 && convex == 0)
		printf("Convex\n");
	else if (concave == 0 && convex != 0)
		printf("Concave\n");
	else
		printf("None\n");

	return 0;
}