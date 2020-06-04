#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
    char buffer[1000];
    scanf("%s", buffer);
    int len = strlen(buffer);

    for (int i = len-1; i >= 0; i--)
    {
        printf("%c", buffer[i]);
    }

    return 0;
}