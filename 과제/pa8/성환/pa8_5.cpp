#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int size;
int arr[100][100];

void initialize();
void printClockwise();
void printIncreasingIndex(int start, int end);
void printDecreasingIndex(int start, int end);

int main()
{
    initialize();

    printClockwise();

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

void printClockwise()
{
    int start = 0, end = size-1;
    while (start < end)
    {
        printIncreasingIndex(start, end);
        printDecreasingIndex(start, end);
        start++;
        end--;
    }
    if (start == end)
        printf("%d", arr[start][end]);
}

void printIncreasingIndex(int start, int end)
{
    for (int i = start; i < end; i++)
    {
        printf("%d ", arr[start][i]);
    }
    for (int i = start; i < end; i++)
    {
        printf("%d ", arr[i][end]);
    }
}

void printDecreasingIndex(int start, int end)
{
    for (int i = end; i > start; i--)
    {
        printf("%d ", arr[end][i]);
    }
    for (int i = end; i > start; i--)
    {
        printf("%d ", arr[i][start]);
    }
}
