#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	int arr[100000];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	// selection sort
	int maxIndex;
	for (int i = 0; i < n - 1; i++)
	{
		maxIndex = 0;
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] > arr[maxIndex])
				maxIndex = j;
		}
		// swap
		int tmp = arr[n - i - 1];
		arr[n - i - 1] = arr[maxIndex];
		arr[maxIndex] = tmp;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}