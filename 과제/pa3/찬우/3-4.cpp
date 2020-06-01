#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b, input;
	scanf("%d %d %d", &a, &b, &input);

	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	while (input != -1) {
		if (input > a) {
			b = a;
			a = input;
		}
		else if (input > b)
			b = input;
		scanf("%d", &input);
	}

	printf("%d %d", a, b);

	return 0;
}