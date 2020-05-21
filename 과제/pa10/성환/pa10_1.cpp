#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define VERTICAL 1
#define HORIZONTAL 2

int intersect(int line1[], int line2[]);
void sort(int arr[][2], int n);
int compare(int point1[], int point2[]);
void swap(int arr[][2], int i, int j);

int main()
{
    int n;
    scanf("%d", &n);

    int len1 = 0, len2 = 0;
    int verticalLines[1000][4];
    int horizontalLines[1000][4];

    int pointCnt = 0;
    int points[1000][2];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &verticalLines[len1][j]);
        }
        if (verticalLines[len1][1] == verticalLines[len1][3])
        {
            for (int k = 0; k < 4; k++)
            {
                horizontalLines[len2][k] = verticalLines[len1][k];
            }
            len2++;
        }
        else
            len1++;
    }

    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (intersect(verticalLines[i], horizontalLines[j]))
            {
                points[pointCnt][0] = verticalLines[i][0];
                points[pointCnt][1] = horizontalLines[j][1];
                pointCnt++;
            }
        }
    }

    sort(points, pointCnt);

    for (int i = 0; i < pointCnt; i++)
    {
        printf("[%d, %d]\n", points[i][0], points[i][1]);
    }
}

int intersect(int line1[], int line2[])
{
    if (line1[1] <= line2[1] && line1[3] >= line2[1] &&
        line2[0] <= line1[0] && line2[2] >= line1[0])
        return 1;
    return 0;
}

void sort(int arr[][2], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (compare(arr[j], arr[j + 1]) > 0)
                swap(arr, j, j + 1);
        }
    }
}

int compare(int point1[], int point2[])
{
    if (point1[0] == point2[0])
        return point1[1] - point2[1];
    return point1[0] - point2[0];
}

void swap(int arr[][2], int i, int j)
{
    int tmp = arr[i][0];
    arr[i][0] = arr[j][0];
    arr[j][0] = tmp;

    tmp = arr[i][1];
    arr[i][1] = arr[j][1];
    arr[j][1] = tmp;
}