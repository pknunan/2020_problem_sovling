#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int f0 = 1, f1 = 1, f2 = 2;

	for (int i = 0; i < n - 2; i++)
	{
		f0 = f1;
		f1 = f2;
		f2 = f1 + f0;
	}

	printf("%d\n", f2);

	return 0;
}