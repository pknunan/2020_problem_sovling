#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

int main() {
    int n = 0;
    int denom = 1;
    double value = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        denom *= i;
        value += 1.0 / denom;
    }

    printf("%.4f", value);
}