#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

int main() {
    int sum = 0;
    int tmp;
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &tmp);
        sum += tmp;
        printf("%d ", sum / i);
    }
}