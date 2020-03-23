#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int f1 = 1, f2 = 1, f3 = 1, n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }

    printf("%d", f3);
}