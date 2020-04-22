#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int begin[1000], end[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &begin[i], &end[i]);
	}

	// bubble sort
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (begin[j] > begin[j + 1]) // begin을 비교하여 정렬
			{
				int tmp = begin[j + 1];
				begin[j + 1] = begin[j];
				begin[j] = tmp;

				tmp = end[j + 1];
				end[j + 1] = end[j];
				end[j] = tmp;
			}
			else if (begin[j] == begin[j + 1])
			{
				if (end[j] > end[j + 1]) // begin이 같을때는 end를 비교하여 정렬
				{
					int tmp = begin[j + 1];
					begin[j + 1] = begin[j];
					begin[j] = tmp;

					tmp = end[j + 1];
					end[j + 1] = end[j];
					end[j] = tmp;
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", begin[i], end[i]);
	}

	return 0;
}