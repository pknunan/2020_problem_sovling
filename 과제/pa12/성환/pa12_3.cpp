#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void chkStr(char  str1[1000], int  chk[26]);

int main()
{
    int chk[26] = { 0 };
    char str1[1000];
    char str2[1000];
    scanf(" %s", str1);
    scanf(" %s", str2);

    chkStr(str1, chk);
    chkStr(str2, chk);

    for (int i = 0; i < 26; i++)
    {
        if (chk[i] % 2 == 1) 
        {
            printf("%s", "no");
            return 0;
        }
    }
    printf("%s", "yes");

    return 0;
}

void chkStr(char  str[1000], int  chk[26])
{
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            chk[str[i] - 65]++;
        else if (str[i] >= 97 && str[i] <= 122)
            chk[str[i] - 97]++;
    }
}