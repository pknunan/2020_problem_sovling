#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[100], n, k;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &k);
	int min = arr[0] - k < 0 ? k - arr[0] : arr[0] - k;
	int index = 0;

	for (int i = 0; i < n; i++)
	{
		int abs = arr[i] - k < 0 ? k - arr[i] : arr[i] - k;
		if (abs < min) {
			min = abs;
			index = i;
		}
	}

	printf("%d", arr[index]);

	return 0;
}