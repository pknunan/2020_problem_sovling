#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a < c) {
		if (b < c)
			printf("NO\n");
		else
			printf("YES\n");
	}
	else if (a > c) {
		if (a > d)
			printf("NO\n");
		else
			printf("YES\n");
	}
	else
		printf("YES\n");

	return 0;
}