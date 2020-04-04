#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int v = 1;
	while (v * 2 <= n) {
		v *= 2;
	}

	while (v > 0)
	{
		if (n >= v) {
			n = n - v;
			printf("1");
		}
		else
			printf("0");
		v /= 2;
	}

	return 0;
}