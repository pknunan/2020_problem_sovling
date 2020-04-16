#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int stock;
	scanf("%d", &stock);
	int min = stock, max = stock;
	int benefit = 0;

	while (stock != -1)
	{
		if (stock < max) {
			benefit += max - min;
			min = stock;
			max = stock;
		}
		else {
			max = stock;
		}
		scanf("%d", &stock);
	}
	benefit += max - min;

	printf("%d", benefit);

	return 0;
}