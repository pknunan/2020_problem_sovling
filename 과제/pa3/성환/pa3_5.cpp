#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int curr, prev1, prev2; // �Է� ���� ������ ����� ����
	int cnt = 0; // local minima

	scanf("%d", &n);
	curr = n, prev1 = n, prev2 = n; // �ʱ�ȭ;
	scanf("%d", &n); // ù ��° ���� ó���� ���� �߰� �Է�

	while (n != -1)
	{
		prev2 = prev1;
		prev1 = curr;
		curr = n;

		if (prev1 <= prev2 && prev1 <= curr)
			cnt++;

		scanf("%d", &n);
	}
	if (curr <= prev1) // ������ ���� ó��
		cnt++;

	printf("%d", cnt);

	return 0;
}