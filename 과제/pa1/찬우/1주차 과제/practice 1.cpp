#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int a, b, n = 1;

	scanf("%d %d", &a, &b);

	for (int i = 0; i < b; i++)
	{
		n *= a;
	}

	printf("%d\n", n);

	return 0;
}