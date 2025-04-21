#include <stdio.h>

int main()
{
    char S[1001];
    char T[1001];
    scanf("%s", S);
    scanf("%s", T);
    int s_len = strlen(S);
    int t_len = strlen(T);
    printf("%d %d\n", s_len, t_len);
    printf("%s %s", S, T);
    return 0;
}