#include <stdio.h>

int main()
{
    char url[10001];
    scanf("%s", url);

    char key[50], value[50];

    int i = 0;
    while (url[i] != '?' && url[i] != '\0')
    {
        i++;
    }

    if (url[i] == '?')
    {
        i++;
    }

    while (url[i] != '\0')
    {
        int k = 0;
        while (url[i] != '=' && url[i] != '\0')
        {
            key[k++] = url[i++];
        }
        key[k] = '\0';

        if (url[i] == '=')
        {
            i++;
        }

        int v = 0;
        while (url[i] != '&' && url[i] != '\0')
        {
            value[v++] = url[i++];
        }
        value[v] = '\0';

        printf("%s: %s\n", key, value);

        if (url[i] == '&')
        {
            i++;
        }
    }

    return 0;
}