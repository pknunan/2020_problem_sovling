#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);

	while (y > 0) {
		int tmp = y;
		y = x % tmp;
		x = tmp;
	}

	printf("%d", x);

	return 0;
}