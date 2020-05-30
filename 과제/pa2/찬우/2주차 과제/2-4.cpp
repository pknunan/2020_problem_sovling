#pragma warning (disable : 4996)
#include <stdio.h>

int main(void)
{
	int n, input1, input2, max, min;

	scanf("%d %d", &n, &input1);
	printf("0\n");
	scanf("%d", &input2);
	if (input1 > input2) {
		max = input1;
		min = input2;
	}
	else {
		max = input2;
		min = input1;
	}
	printf("%d\n", max - min);

	for (int i = 0; i < n - 2; i++) {
		scanf("%d", &input1);
		if (input1 > max)
			max = input1;
		else if (input1 < min)
			min = input1;
		printf("%d\n", max - min);
	}
	return 0;
}