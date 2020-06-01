#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int count = 0;

	for (int x = 0; x <= 100; x++) {
		for (int y = 0; y <= x * 2.0 / 3.0; y++) {
			int distance = x * x + y * y;
			if (y >= x / 3.0 && distance <= 10000)
				count++;
		}
	}
	printf("%d\n", count);
	return 0;
}