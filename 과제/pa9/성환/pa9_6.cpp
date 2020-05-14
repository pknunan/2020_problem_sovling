#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int polynomial(int n, int data[], int x);

int main()
{
    int n;
    int data[1000];
    int x;
    scanf("%d", &n);
    for (int i = 0; i < n*2; i+=2)
    {
        scanf("%d %d", &data[i], &data[i+1]);
    }
    scanf("%d", &x);

    printf("%d\n", polynomial(n, data, x));

    return 0;
}

int polynomial(int n, int data[], int x)
{
    int result = 0;

    for (int i = 0; i < n*2; i+=2)
    {
        result += (data[i] * pow(x, data[i + 1]));
    }

    return result;
}
