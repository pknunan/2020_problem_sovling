#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	double sum = 0, a = 1.0;

	for (int i = 1; i <= n; i++)
	{
		a /= i;
		sum += a;
	}

	printf("%f", sum);

	return 0;
}