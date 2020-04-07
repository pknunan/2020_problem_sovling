#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand((unsigned int)time(NULL));

	int t = 1000000;
	int cntOfCase1 = 0;
	while (t--)
	{
		for (int i = 0; i < 6; i++)
		{
			if (rand() % 6 + 1 == 1)
			{
				cntOfCase1++; // 6번 시도 중 한번이라도 1이 나온다면 cnt 증가 후 종료
				break;
			}
		}
	}
	printf("%f\n", cntOfCase1 / 1000000.0);

	t = 1000000;
	int cntOfCase2 = 0;
	while (t--)
	{
		int flag = 0;
		for (int i = 0; i < 12; i++)
		{
			if (rand() % 6 + 1 == 1)
			{
				if (flag == 1) // 두 번째 1이 등장하면
				{
					cntOfCase2++;
					break;
				}
				else
					flag = 1; // 1이 나온다면 flag를 변경
			}
		}
		flag = 0;
	}
	printf("%f\n", cntOfCase2 / 1000000.0);

	return 0;
}