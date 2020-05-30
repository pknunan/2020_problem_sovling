#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int n, min, input, count = 0;

	scanf("%d", &n);

	do {
		scanf("%d", &input);
		count++;
	} while (input < 0 && count < n);

	min = input;

	if (count < n) {
		for (count; count < n; count++) {
			scanf("%d", &input);
			if (input >= 0 && input < min)
				min = input;
		}
		printf("%d\n", min);
	}
	else
		printf("-1\n");

	return 0;
}