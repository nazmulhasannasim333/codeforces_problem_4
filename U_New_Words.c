#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000001];
    scanf("%s", S);
    int freq[5] = {0};

    for (int i = 0; S[i] != '\0'; i++)
    {
        char ch = S[i];
        if (ch == 'E' || ch == 'e')
            freq[0]++;
        else if (ch == 'G' || ch == 'g')
            freq[1]++;
        else if (ch == 'Y' || ch == 'y')
            freq[2]++;
        else if (ch == 'P' || ch == 'p')
            freq[3]++;
        else if (ch == 'T' || ch == 't')
            freq[4]++;
    }

    int min = freq[0];
    for (int i = 1; i < 5; i++)
    {
        if (freq[i] < min)
        {
            min = freq[i];
        }
    }

    printf("%d\n", min);
    return 0;
}