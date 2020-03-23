#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = n/2; i > 0; i/=2)
    {
        printf("%d ", i);
    }
}