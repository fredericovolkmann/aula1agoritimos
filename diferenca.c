#include <stdio.h>

int main()
{
    int A;
    int B;
    int C;
    int D;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    int diferenca = (A * B - C * D);
    printf("DIFERENCA = %d\n", diferenca);
    return 0;
}