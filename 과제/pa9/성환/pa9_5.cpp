#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compareLexicographic(int a, int b);
int tokenize(int arr[], int num);

int main()
{
    FILE* fp = fopen("input5.txt", "r");
    int n = 0;
    int data[1000];
    while (!feof(fp))
    {
        fscanf(fp, "%d", &data[n++]);
    }
    fclose(fp);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (compareLexicographic(data[j], data[j + 1]) > 0)
            {
                int tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}

int compareLexicographic(int a, int b)
{
    int token1[10] = { 0 };
    int token2[10] = { 0 };
    int n1 = tokenize(token1, a);
    int n2 = tokenize(token2, b);

    for (int i = n1 - 1, j = n2 - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (token1[i] != token2[j])
            return token1[i] - token2[j];
    }
    return n1-n2;
}

int tokenize(int arr[], int num)
{
    int n = 0;
    while (num > 0)
    {
        arr[n++] = num % 10;
        num /= 10;
    }
    return n;
}
