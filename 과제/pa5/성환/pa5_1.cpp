#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int n, data[100], sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
		sum += data[i];
	}

	double avr = (double)sum / n;
	double tmp = 0;
	for (int i = 0; i < n; i++)
	{
		tmp += pow(data[i] - avr, 2);
	}
	double sd = sqrt(tmp / n);

	avr *= 10000;
	sd *= 10000;

	if ((int)avr % 10 != 0)
		printf("%.5g ", avr/10000);
	else {
		avr /= 10000;
		if (avr > (int)avr)
			printf("%.4g ", avr);
		else
			printf("%.4g.0 ", avr);
	}

	if ((int)sd % 10 != 0)
		printf("%.5g", sd/10000);
	else {
		sd /= 10000;
		if (sd > (int)sd)
			printf("%.4g", sd);
		else
			printf("%.4g.0", sd);
	}

	return 0;
}