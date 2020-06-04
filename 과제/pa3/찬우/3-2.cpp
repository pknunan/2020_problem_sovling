#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d %d", &a, &b);

	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	do {
		c = a % b;
		a = b;
		b = c;
	} while (c != 0);
	printf("%d\n", a);

	return 0;
}