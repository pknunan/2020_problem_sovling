#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    double value = 1;
    for (int i = 2; i <= n; i++)
    {
        value += 1.0 / i;
    }

    printf("%.4f", value);
}