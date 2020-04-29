#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[1000];

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[i])
				cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}