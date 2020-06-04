#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned int)time(NULL));
	int count1 = 0, count2 = 0;
	for (int i = 0; i < 1000000; i++) {
		int count = 0;
		for (int j = 0; j < 6; j++) {
			int dice = rand() % 6 + 1;

			if (dice == 1)
				count++;
		}
		if (count >= 1)
			count1++;
		count = 0;
		for (int k = 0; k < 12; k++) {
			int dice = rand() % 6 + 1;

			if (dice == 1)
				count++;
		}
		if (count >= 2)
			count2++;
	}

	printf("%f %f\n", count1 / 1000000.0, count2 / 1000000.0);

	return 0;
}