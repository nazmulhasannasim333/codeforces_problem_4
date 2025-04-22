#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[n + 1];
    scanf("%s", str);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    printf("%s\n", str);
    return 0;
}