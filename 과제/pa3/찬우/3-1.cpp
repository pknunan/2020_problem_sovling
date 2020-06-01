#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int n, v = 1;
	scanf("%d", &n);

	while (n > v)
		v *= 2;
	v /= 2;
	while (v > 0) {
		if (n >= v) {
			printf("1");
			n -= v;
		}
		else
			printf("0");
		v /= 2;
	}
	printf("\n");

	return 0;
}