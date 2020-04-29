#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int x[1000];
	int y[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}

	int startIndex = 0, endIndex = 0;

	int maxLen = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int len = 0;
			for (int k = x[i]; k < y[i]; k++)
			{
				if (k >= x[j] && k < y[j])
					len++;
			}
			if (len > maxLen)
			{
				startIndex = i;
				endIndex = j;
				maxLen = len;
			}
		}
	}

	printf("[%d, %d]\n", x[startIndex], y[startIndex]);
	printf("[%d, %d]\n", x[endIndex], y[endIndex]);

	return 0;
}