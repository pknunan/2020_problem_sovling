#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int y1, m1, d1, y2, m2, d2;
    scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);
    if (y1 - y2 == 0) {
        if (m1 - m2 == 0) {
            if (d1 - d2 < 0)
                printf("-1");
            else if (d1 - d2 > 0)
                printf("1");
            else
                printf("0");
        }
        else if (m1 - m2 < 0)
            printf("-1");
        else
            printf("1");
    }
    else if (y1 - y2 < 0)
        printf("-1");
    else
        printf("1");
}

// 정확한 날짜만 들어온다면
int main() {
    int y1, m1, d1, y2, m2, d2;
    scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);

    int sum1 = y1 * 400 + m1 * 40 + d1;
    int sum2 = y2 * 400 + m2 * 40 + d2;

    if (sum1 - sum2 < 0)
        printf("-1");
    else if (sum1 - sum2 > 0)
        printf("1");
    else
        printf("0");
}