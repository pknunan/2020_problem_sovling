#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int curr, prev1, prev2; // 입력 받은 정수를 기록할 변수
	int cnt = 0; // local minima

	scanf("%d", &n);
	curr = n, prev1 = n, prev2 = n; // 초기화;
	scanf("%d", &n); // 첫 번째 정수 처리를 위한 추가 입력

	while (n != -1)
	{
		prev2 = prev1;
		prev1 = curr;
		curr = n;

		if (prev1 <= prev2 && prev1 <= curr)
			cnt++;

		scanf("%d", &n);
	}
	if (curr <= prev1) // 마지막 정수 처리
		cnt++;

	printf("%d", cnt);

	return 0;
}