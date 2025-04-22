#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        char str[100001];
        scanf("%s", str);
        int isGood = 0;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if ((str[j] == '0' && str[j + 1] == '1' && str[j + 2] == '0') || str[j] == '1' && str[j + 1] == '0' && str[j + 2] == '1')
            {
                isGood = 1;
                break;
            }
        }
        if (isGood == 1)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }
    return 0;
}