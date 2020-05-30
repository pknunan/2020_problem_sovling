#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int n, sum = 0, average;
	
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &n);
		
		sum += n;
		average = sum / i;
		
		printf("%d\n", average);
	}

	return 0;
}