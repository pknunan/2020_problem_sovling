#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	double  a = 1.0, sum = 1.0;

	for (int i = 0; i < n; i++)
	{
		a /= (-2);
		sum += a;
	}

	printf("%f\n", sum);

	return 0;
}