#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int size;
int arr[100][100] = { 0 };

void initialize();
int calcPartialSum(int x1, int y1, int x2, int y2);

int main()
{
    initialize();
    int max = arr[0][0];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int p = i; p < size; p++)
            {
                for (int q = j; q < size; q++)
                {
                    int sum = calcPartialSum(i, j, p, q);
                    if (sum > max)
                        max = sum;
                }
            }
        }
    }

    printf("%d\n", max);

    return 0;
}

void initialize()
{
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}


int calcPartialSum(int x1, int y1, int x2, int y2)
{
    int sum = 0;

    for (int i = x1; i <= x2; i++)
    {
        for (int j = y1; j <= y2; j++)
        {
            sum += arr[i][j];
        }
    }

    return sum;
}
