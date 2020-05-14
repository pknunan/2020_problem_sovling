#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isRelativePrime(int a, int b);

int main()
{
    int cnt = 0;
    for (int i = 2; i < 101; i++)
    {
        for (int j = i+1; j < 101; j++)
        {
            if (isRelativePrime(i, j))
            {
                for (int k = j+1; k < 101; k++)
                {
                    if (isRelativePrime(i, k) && isRelativePrime(j, k))
                        cnt++;
                }
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}

int isRelativePrime(int a, int b)
{
    while (b > 0)
    {
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    if (a == 1)
        return 1;
    return 0;
}
