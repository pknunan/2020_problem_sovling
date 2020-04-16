#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, arr[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	int leader[100];
	int n2 = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= max) {
			max = arr[i];
			leader[n2++] = arr[i];
		}
	}

	printf("%d: ", n2);
	for (int i = 0; i < n2; i++)
	{
		printf("%d ", leader[i]);
	}

	return 0;
}