#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[1000];
    scanf("%s", buffer);
    int n = strlen(buffer);

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (buffer[j] > buffer[j + 1])
            {
                char tmp = buffer[j];
                buffer[j] = buffer[j + 1];
                buffer[j + 1] = tmp;
            }
        }
    }

    printf("%s", buffer);

    return 0;
}