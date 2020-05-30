#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	double a, sum = 0;

	for (int i = 1; i <= n; i++)
	{
		a = 1.0 / i;
		sum += a;
	}

	printf("%f\n", sum);

	return 0;
}