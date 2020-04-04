#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* �������� ������ ���� �ٸ� ���
* 0�� - Both
* 1�� - Convex or Concave
* 2�� - None
*/

#define DECREASING 1
#define INCREASING 2

int main()
{
	int n, prev;
	int isConcave = 0, isConvex = 0;
	int status = 0;

	// �ʱ�ȭ
	scanf("%d", &n);
	prev = n;

	while (n != -1)
	{
		if (n > prev) // ������
		{
			if (status == DECREASING) // ���� ���°� �������� ��
				isConcave = 1; // ���� -> ���� = ����
			status = INCREASING; // ���� ���� ����
		}
		else if (n < prev) // ������
		{
			if (status == INCREASING) // ���� ���°� �������� ��
				isConvex = 1; // ���� -> ���� = ����
			status = DECREASING; // ���� ���� ����
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