#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int value = 1;

    for (int i = 0; i < b; i++)
    {
        value *= a;
    }

    printf("%d", value);
}