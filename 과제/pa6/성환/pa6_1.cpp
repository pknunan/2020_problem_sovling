#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[1000] = { 0 };
	int n = 0;
	int num;
	scanf("%d", &num);


	//insertion sort
	while (num != -1)
	{
		int i = n - 1;
		while (i >= 0 && arr[i] > num) // 배열 마지막부터 입력받은 수보다 크지 않은 수가 나올때 까지 배열 탐색
		{
			i--;
		}

		if (i < 0 || arr[i] != num) { // 수가 중복되지 않았을 때
			for (int j = n - 1; j > i; j--)
			{
				arr[j + 1] = arr[j]; // 해당 인덱스까지 데이터를 오른쪽으로 시프트
			}
			arr[i + 1] = num; // 배열에 값 입력
			n++;

			for (int i = 0; i < n; i++) // 데이터 출력
			{
				printf("%d ", arr[i]);
			}
		}
		else
			printf("duplicate");

		printf("\n");

		scanf("%d", &num);
	}

	return 0;
}