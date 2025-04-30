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
            int left = start, right = i - 1;
            while (left < right)
            {
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left++;
                right--;
            }
            start = i + 1;
        }
    }

    printf("%s\n", s);
    return 0;
}