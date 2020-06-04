#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int k;
	scanf("%d", &k);

	for (int i = 0; i <= k; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d %d\n", j, i - j);
		}
	}

	return 0;
}