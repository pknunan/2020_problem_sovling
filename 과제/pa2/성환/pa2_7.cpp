#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int coef, expo_x, expo_y;
    scanf("%d %d %d", &coef, &expo_x, &expo_y);

    if (expo_x == 0 && expo_y == 0)
        printf("%d", coef);
    else 
    {
        if (coef == -1)
            printf("-");
        else if (coef != 1)
            printf("%d", coef);

        if (expo_x != 0) {
            printf("x");
            if (expo_x != 1)
                printf("^%d", expo_x);
        }

        if (expo_y != 0) {
            printf("y");
            if (expo_y != 1)
            {
                printf("^%d", expo_y);
            }
        }
    }
}