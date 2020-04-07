#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int cnt = 0;
	for (int i = 0; i <= 100; i++)
	{
		int j = i / 3;
		if (j < i / 3.0)
			j++;
		for (; j <= i * 2 / 3; j++)
		{
			if (i * i + j * j <= 10000)
				cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}