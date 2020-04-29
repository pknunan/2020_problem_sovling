#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int tmp;
	int arr[1000];
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &tmp);
		int j = i - 1;
		for (; j >= 0; j--)
		{
			if (arr[j] > tmp)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = tmp;
	}

	int len = 1;
	for (int i = 1; i < 7; i++)
	{
		if (arr[i] == arr[i - 1] + 1)
		{
			len++;
			if (len == 5)
			{
				printf("YES");
				return 0;
			}
		}
		else if (arr[i] == arr[i - 1])
			continue;
		else
			len = 1;
	}
	printf("NO");
	return 0;
}