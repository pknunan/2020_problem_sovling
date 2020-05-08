#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[100][100] = { 0 };

int binomialCoefficientOf(int n, int k);
int calcResult(int n, int k);

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	printf("%d", binomialCoefficientOf(n, k));
}

int binomialCoefficientOf(int n, int k)
{
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			arr[i][j] = calcResult(i, j);
		}
	}
	return arr[n][k];
}

int calcResult(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	return arr[n-1][k-1] + arr[n-1][k];
}
