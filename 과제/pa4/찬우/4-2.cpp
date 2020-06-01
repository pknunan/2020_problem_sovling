#pragma warning (disable:4996)
#include <stdio.h>

int GCD(int a, int b)
{
	int GCD;
	while (b > 0) {
		if (a % b == 0) {
			GCD = b;
			break;
		}
		else {
			int tmp = a % b;
			a = b;
			b = tmp;
		}
	}
	return GCD;
}

int main(void)
{
	int count = 0;

	for (int i = 2; i <= 98; i++) {
		for (int j = i + 1; j <= 99; j++) {
			for (int k = j + 1; k <= 100; k++) {
				if (GCD(i, j) == 1 && GCD(i, k) == 1 && GCD(j, k) == 1)
					count++;
			}
		}
	}
	printf("%d", count);

	return 0;
}