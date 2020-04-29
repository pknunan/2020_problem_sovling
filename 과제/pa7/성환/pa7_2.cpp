#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	// 완전 탐색(이중 반복문)
	int maxLen = 0;
	for (int i = 0; i < n - 1; i++)
	{
		int len = 1;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] >= arr[j - 1])
				len++;
			else
				break;
		}
		if (len > maxLen)
			maxLen = len;
	}
	printf("%d\n", maxLen);

	// 다이나믹 프로그래밍(단일 반복문)
	maxLen = 0;
	int len[1000];
	len[0] = 1;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] >= arr[i - 1])
		{
			len[i] = len[i - 1] + 1;
			if (len[i] > maxLen)
				maxLen = len[i];
		}
		else
			len[i] = 1;
	}

	printf("%d\n", maxLen);

	return 0;
}