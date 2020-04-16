#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int digit[10];
	for (int i = 0; i < 10; i++)
	{
		digit[i] = 0;
	}

	int n;
	scanf("%d", &n);

	while (n > 0)
	{
		digit[n % 10]++;
		n /= 10;
	}

	for (int i = 0; i < 9; i++)
	{
		printf("%d, ", digit[i]);
	}
	printf("%d", digit[9]);

	return 0;
}