#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a + b <= c || a + c <= b || b + c <= a)
		printf("NO\n");
	else if (a <= 0 || b <= 0 || c <= 0)
		printf("NO\n");
	else
		printf("YES\n");

	return 0;
}