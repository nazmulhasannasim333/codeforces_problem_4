#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int tc = 0; tc < n; tc++)
    {
        char s[51], t[51];
        scanf("%s %s", &s, &t);
        int s_len = strlen(s);
        int t_len = strlen(t);

        int i = 0, j = 0;
        while (i < s_len && j < t_len)
        {
            printf("%c%c", s[i], t[j]);
            i++;
            j++;
        }

        while (i < s_len)
        {
            printf("%c", s[i]);
            i++;
        }

        while (j < t_len)
        {
            printf("%c", t[j]);
            j++;
        }
        printf("\n");
    }

    return 0;
}