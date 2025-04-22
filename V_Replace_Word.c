#include <stdio.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (i + 4 < len && s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T')
        {
            printf(" ");
            i += 4;
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    return 0;
}