#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, arr[100], k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &k);

	for (int i = 0; i < k; i++)
	{
		int tmp = arr[n-1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = tmp;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

// 굳이 저장할 필요가 없다면
int main2() 
{
	int n, arr[100], k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &k);

	for (int i = n-k; i < n-k+n; i++)
	{
		printf("%d ", arr[i % n]);
	}

	return 0;
}