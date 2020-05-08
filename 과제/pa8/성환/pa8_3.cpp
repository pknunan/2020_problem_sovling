#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double arr[100][100] = { 0 };
int size;

void initialize();
void calcAverage();
double averageOf(int row, int colum);
void calcStandardDeviation();
double standardDeviationOf(int row, int colum);
void printData();

int main()
{
    initialize();

    calcAverage();
    calcStandardDeviation();

    printData();

    return 0;
}

void initialize()
{
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}

void calcAverage()
{
    for (int i = 0; i < size; i++)
    {
        arr[i][size] = averageOf(i, -1);
        arr[size][i] = averageOf(-1, i);
    }
}

double averageOf(int row, int colum)
{
    double sum = 0;

    if (colum == -1)
        for (int i = 0; i < size; i++)
            sum += arr[row][i];

    else if (row == -1)
        for (int i = 0; i < size; i++)
            sum += arr[i][colum];

    return sum / size;
}

void calcStandardDeviation()
{
    for (int i = 0; i < size; i++)
    {
        arr[i][size + 1] = standardDeviationOf(i, -1);
        arr[size + 1][i] = standardDeviationOf(-1, i);
    }
}

double standardDeviationOf(int row, int colum)
{
    double sum = 0;

    if (colum == -1)
        for (int i = 0; i < size; i++)
            sum += pow(arr[row][i] - arr[row][size], 2);


    else if (row == -1)
        for (int i = 0; i < size; i++)
            sum += pow(arr[i][colum] - arr[size][colum], 2);

    return sqrt(sum / size);
}


void printData()
{
    for (int i = 0; i < size + 2; i++)
    {
        for (int j = 0; j < size + 2; j++)
        {
            if (i < size && j < size)
                printf("%d ", (int)arr[i][j]);
            else if (i >= size && j >= size)
                break;
            else
                printf("%.6f ", arr[i][j]);
        }
        printf("\n");
    }
}