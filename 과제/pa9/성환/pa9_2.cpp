#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double evalProbBySim(int N, int k, int T);

int main()
{
    int T = 1000000;
    int k;
    srand((unsigned int)time(NULL));
    scanf("%d", &k);

    while (k != 0)
    {
        printf("%f\n", evalProbBySim(6 * k, k, T));
        scanf("%d", &k);
    }
    return 0;
}

double evalProbBySim(int N, int k, int T)
{
    int number;
    int sum = 0;
    for (int i = 0; i < T; i++)
    {
        int cnt = 0;
        for (int j = 0; j < N; j++)
        {
            number = rand() % 6 + 1;
            if (number == k)
                cnt++;
            if (cnt >= k)
            {
                sum++;
                break;
            }
        }
    }

    return (double)sum / T;
}
