#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b, input, count = 0;
	scanf("%d %d %d", &a, &b, &input);

	if (a <= b)
		count++;
	while (input != -1) {
		if (a >= b&& b <= input)
			count++;
		a = b;
		b = input;
		scanf("%d", &input);
	}
	if (a >= b)
		count++;

	printf("%d\n", count);
	
	return 0;
}