#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 * 사전식 정렬 조건
 * 1. 두 수를 비교했을때 가장 왼쪽 숫자부터 숫자상 빠른 수가 빠르다.
 * 2. 1의 조건으로 비교할 수 없다면 길이가 짧은 수가 빠르다.
*/

int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);

	int split1[1000];
	int split2[1000];
	int lengthN1 = 0, lengthN2 = 0;

	// Split integer
	int tmp = n1;
	while (tmp > 0) {
		split1[lengthN1++] = tmp % 10;
		tmp /= 10;
	}
	tmp = n2;
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
		int tmp = n2;
		n2 = n1;
		n1 = tmp;
	}

	printf("%d %d", n1, n2);

	return 0;
}