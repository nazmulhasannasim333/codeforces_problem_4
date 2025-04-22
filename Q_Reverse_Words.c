#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    fgets(s, 1000001, stdin);

    int len = strlen(s);
    if (s[len - 1] == '\n')
    {
        s[len - 1] = '\0';
        len--;
    }

    int start = 0;

    for (int i = 0; i <= len; i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            for (int j = i - 1; j >= start; j--)
            {
                printf("%c", s[j]);
            }
            if (s[i] == ' ')
            {
                printf(" ");
            }
            start = i + 1;
        }
    }

    return 0;
}