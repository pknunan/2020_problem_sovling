#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c&& a + c > b&& b + c > a)
        printf("Yes");
    else
        printf("No");
}