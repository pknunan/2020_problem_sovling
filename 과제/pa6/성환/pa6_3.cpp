#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int arr[100000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	// bubble sort
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	// 중복 제거
	int j = 1, length = n;
	for (int i = 1; i < length; i++)
	{
		if (arr[i] != arr[i - 1])
			arr[j++] = arr[i];
		else
			n--;
	}

	printf("%d:", n);
	for (int i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}

	return 0;
}