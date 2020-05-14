#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compareInts(int sa, int ta, int sb, int tb);

int main()
{
    int n;
    int data[1000][2];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &data[i][0], &data[i][1]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (compareInts(data[j][0], data[j][1], data[j + 1][0], data[j + 1][1]) > 0)
            {
                int tmp = data[j][0];
                data[j][0] = data[j + 1][0];
                data[j + 1][0] = tmp;

                tmp = data[j][1];
                data[j][1] = data[j + 1][1];
                data[j + 1][1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", data[i][0], data[i][1]);
    }

    return 0;
}

int compareInts(int sa, int ta, int sb, int tb)
{
    if (sa == sb)
    {
        return ta - tb;
    }
    return sa - sb;
}