#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, k;
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &k);

	int maxLen = 0;
	for (int i = 0; i < n; i++)
	{
		int len = 0, sum = 0;
		for (int j = i; j < n; j++)
		{
			sum += arr[j];
			if (sum <= k)
				len++;
			else 
				break;
		}
		if (len > maxLen)
			maxLen = len;
	}

	printf("%d\n", maxLen);

	return 0;
}