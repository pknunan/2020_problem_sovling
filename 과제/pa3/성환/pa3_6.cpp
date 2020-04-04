#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 변곡점의 개수에 따라 다른 출력
* 0개 - Both
* 1개 - Convex or Concave
* 2개 - None
*/

#define DECREASING 1
#define INCREASING 2

int main()
{
	int n, prev;
	int isConcave = 0, isConvex = 0;
	int status = 0;

	// 초기화
	scanf("%d", &n);
	prev = n;

	while (n != -1)
	{
		if (n > prev) // 증가중
		{
			if (status == DECREASING) // 이전 상태가 감소중일 때
				isConcave = 1; // 감소 -> 증가 = 오목
			status = INCREASING; // 현재 상태 변경
		}
		else if (n < prev) // 감소중
		{
			if (status == INCREASING) // 이전 상태가 증가중일 때
				isConvex = 1; // 증가 -> 감소 = 볼록
			status = DECREASING; // 현재 상태 변경
		}

		prev = n;
		scanf("%d", &n);
	}

	if (isConcave && isConvex)
		printf("%s\n", "None");
	else if (isConcave)
		printf("%s\n", "Concave");
	else if (isConvex)
		printf("%s\n", "Convex");
	else
		printf("%s\n", "Both");

	return 0;
}