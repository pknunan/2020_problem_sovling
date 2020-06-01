#pragma warning (disable:4996)
#include <stdio.h>
#include <math.h>
#define SIZE 100

int main(void)
{
	int n, array[SIZE];
	double sum = 0.0, average, sd;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
		sum += array[i];
	}
	average = sum / n;
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (array[i] - average) * (array[i] - average);
	}
	sd = sqrt(sum / n);

	printf("%f %f\n", average, sd);

	return 0;
}