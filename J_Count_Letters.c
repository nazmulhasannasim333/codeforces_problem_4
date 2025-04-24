#include <stdio.h>
#include <string.h>

char s[10000001];
int main()
{
    scanf("%s", &s);
    int freq[26] = {0};
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            freq[s[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}