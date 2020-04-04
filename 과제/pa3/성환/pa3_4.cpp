#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0, first, second;
	scanf("%d", &n);
	first = n, second = n;

	while (n != -1)
	{
		if (n > first) 
		{
			second = first;
			first = n;
		}
		else if (n > second)
		{
			second = n;
		}
		scanf("%d", &n);
	}

	printf("%d %d", first, second);

	return 0;
}