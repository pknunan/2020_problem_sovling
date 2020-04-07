#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>

int main()
{
	int cnt = 0;
	for (int i = 2; i < 101; i++)
	{
		for (int j = i + 1; j < 101; j++)
		{
			for (int k = j + 1; k < 101; k++)
			{
				int n1 = i, n2 = j;
				int gcd1 = 0, gcd2 = 0;
				while (n2 > 0) 
				{
					int tmp = n2;
					n2 = n1 % n2;
					n1 = tmp;
				}
				gcd1 = n1;

				if (gcd1 == 1) 
				{
					n1 = i;
					n2 = k;
					while (n2 > 0) 
					{
						int tmp = n2;
						n2 = n1 % n2;
						n1 = tmp;
					}
					gcd2 = n1;
				}

				if (gcd2 == 1) 
				{
					n1 = j;
					n2 = k;
					while (n2 > 0)
					{
						int tmp = n2;
						n2 = n1 % n2;
						n1 = tmp;
					}
					if (n1 == 1)
						cnt++;
				}
			}
		}
	}

	printf("%d", cnt);

	return 0;
}