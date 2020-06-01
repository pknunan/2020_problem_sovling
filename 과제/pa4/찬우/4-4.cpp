#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int n, count = 0;
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		int j = i;
		while (j > 0) {
			if (j % 10 == 0)
				count++;
			j /= 10;
		}
	}
	printf("%d\n", count);

	return 0;
}