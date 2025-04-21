#include <stdio.h>
#include <string.h>

int main()
{
    char A[11];
    char B[11];
    scanf("%s", A);
    scanf("%s", B);
    int a_len = strlen(A);
    int b_len = strlen(B);
    printf("%d %d\n", a_len, b_len);
    printf("%s%s\n", A, B);

    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s\n", A, B);
    return 0;
}