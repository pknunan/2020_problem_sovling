#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int arr[100];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			int split1[1000];
			int split2[1000];
			int lengthN1 = 0, lengthN2 = 0;

			// Split integer
			int tmp = arr[j];
			while (tmp > 0) {
				split1[lengthN1++] = tmp % 10;
				tmp /= 10;
			}
			tmp = arr[j+1];
			while (tmp > 0) {
				split2[lengthN2++] = tmp % 10;
				tmp /= 10;
			}

			// Compare each number
			int condition = 0;
			for (int i = lengthN1 - 1, j = lengthN2 - 1; i >= 0 && j >= 0; i--, j--)
			{
				if (split1[i] > split2[j])
				{
					condition = 1;
					break;
				}
				else if (split1[i] < split2[j])
				{
					condition = -1;
					break;
				}
			}
			if (condition == 0)
				if (lengthN1 > lengthN2)
					condition = 1;


			// Swap integer
			if (condition > 0)
			{
				int tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}