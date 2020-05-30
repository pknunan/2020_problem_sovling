#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	for (int i = n; i > 1; i*1)
	{
		i /= 2;
		printf("%d\n", i);
	}

	return 0;
}