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
		while (i >= 0 && arr[i] > num) // �迭 ���������� �Է¹��� ������ ũ�� ���� ���� ���ö� ���� �迭 Ž��
		{
			i--;
		}

		if (i < 0 || arr[i] != num) { // ���� �ߺ����� �ʾ��� ��
			for (int j = n - 1; j > i; j--)
			{
				arr[j + 1] = arr[j]; // �ش� �ε������� �����͸� ���������� ����Ʈ
			}
			arr[i + 1] = num; // �迭�� �� �Է�
			n++;

			for (int i = 0; i < n; i++) // ������ ���
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