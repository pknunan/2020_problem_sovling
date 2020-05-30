#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int coef, expo_x, expo_y;
	scanf("%d %d %d", &coef, &expo_x, &expo_y);

	if (coef == -1) {
		if (expo_x == 0 && expo_y == 0) {
			printf("%d\n", coef);
			return 0;
		}
		else
			printf("-");
	}
	else if (coef == 1) {
		if (expo_x == 0 && expo_y == 0) {
			printf("%d\n", coef);
			return 0;
		}
	}
	else if (coef == 0) {
		printf("%d\n", coef);
		return 0;
	}
	else
		printf("%d", coef);

	if (expo_x == 1)
		printf("x");
	else if (expo_x != 0)
		printf("x^%d", expo_x);

	if (expo_y == 1)
		printf("y");
	else if (expo_y != 0)
		printf("y^%d", expo_y);

	return 0;
}