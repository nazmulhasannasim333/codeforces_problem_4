#include <stdio.h>

int main()
{
    char str[1000001];
    fgets(str, sizeof(str), stdin);

    int count = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (!inWord)
            {
                count++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    printf("%d\n", count);
    return 0;
}