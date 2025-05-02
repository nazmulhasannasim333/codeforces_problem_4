#include <stdio.h>
#include <string.h>

int main() {
    int Q;
    char S[100001];
    scanf("%d", &Q);
    scanf("%s", S);

    char Original[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char Key[] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    int length = strlen(S);

    for (int i = 0; i < length; i++) {
        if (Q == 1) {
            for (int j = 0; j < strlen(Original); j++) {
                if (S[i] == Original[j]) {
                    S[i] = Key[j];
                    break;
                }
            }
        } else { 
            for (int j = 0; j < strlen(Key); j++) {
                if (S[i] == Key[j]) {
                    S[i] = Original[j];
                    break;
                }
            }
        }
    }
    
    printf("%s\n", S);
    return 0;
}