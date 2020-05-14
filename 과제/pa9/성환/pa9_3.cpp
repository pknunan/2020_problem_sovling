#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int lenOfOverLap(int sa, int ta, int sb, int tb);

int main()
{
    int rect1[4];
    int rect2[4];
    for (int i = 0; i < 4; i++)
        scanf("%d", &rect1[i]);
    for (int i = 0; i < 4; i++)
        scanf("%d", &rect2[i]);

    int width = lenOfOverLap(rect1[0], rect1[2], rect2[0], rect2[2]);
    int height = lenOfOverLap(rect1[1], rect1[3], rect2[1], rect2[3]);
    printf("%d\n", width * height);
}

int lenOfOverLap(int sa, int ta, int sb, int tb)
{
    if (ta < sa)
    {
        int tmp = ta;
        ta = sa;
        sa = tmp;
    }
    if (tb < sb)
    {
        int tmp = tb;
        tb = sb;
        sb = tmp;
    }
    int len = 0;
    for (int i = sa; i < ta; i++)
    {
        if (i >= sb && i < tb)
            len++;
    }
    return len;
}
