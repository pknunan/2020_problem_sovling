#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

int main() {
    int n;
    scanf("%d", &n);
    int min = -1;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if (tmp >= 0 && (tmp < min || min == -1))
            min = tmp;
    }

    printf("%d", min);
}