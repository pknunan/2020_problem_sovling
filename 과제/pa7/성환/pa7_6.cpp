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

	int len = 0, maxLen = 0, returnIndex = 0;
	int isFirstZero = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1)
			len++;
		else
		{
			if (isFirstZero)
			{
				isFirstZero = 0;
				returnIndex = i;
				len++;
			}
			else
			{
				isFirstZero = 1;
				i = returnIndex;
				len = 0;
			}
		}
		if (len > maxLen)
			maxLen = len;
	}

	printf("%d", maxLen);
}