#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		int num = i;
		while (num > 0)
		{
			if (num % 10 == 0)
				cnt++;
			num /= 10;
		}
	}

	printf("%d", cnt);

	return 0;
}