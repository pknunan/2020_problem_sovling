#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n = 0, denom = 2, sign = -1;
    double value = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        value += sign * 1.0 / denom;
        denom *= 2;
        sign *= -1;
    }
    printf("%.4f", value);
}