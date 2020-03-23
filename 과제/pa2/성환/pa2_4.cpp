#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, max, min, tmp;
    scanf("%d %d", &n, &tmp);
    max = tmp;
    min = tmp;
    printf("%d ", max - min);

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &tmp);
        if (tmp > max)
            max = tmp;
        if (tmp < min)
            min = tmp;
        printf("%d ", max - min);
    }
}