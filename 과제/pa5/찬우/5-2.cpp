#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int n, count[10] = { 0 };
	scanf("%d", &n);

	while (n > 0) {
		count[n % 10]++;
		n /= 10;
	}
	for (int i = 0; i < 9; i++) {
		printf("%d, ", count[i]);
	}
	printf("%d\n",count[9]);
	
	return 0;
}