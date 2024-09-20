#include <stdio.h>

// oi

int main()
{
    int n[32767];
    int trocou;
    int q;
    int vezespassou=0;
    // pede o usuario quantos numeros deseja trabalhar (q)
    printf("digite quantos numeros voce quer trabalhar:");
    scanf("%d",&q);
    // pedir quantos numeros  o usuario desejar 
    for (int i = 0; i < q; i++)
    {
        printf("digite um numero:");
        scanf("%d", &n[i]);
    }
    for (vezespassou = 0; vezespassou < (q-1); vezespassou++)
    {
        trocou = 0;
        for (int i = 0; i < ((q-1) - vezespassou); i++)
        {
            if (n[i] > n[i + 1])
            {
                trocou = 1;
                int temp = n[i];
                n[i] = n[i + 1];
                n[i + 1] = temp;
            }
        }
        if (trocou == 0)
        {
            break;
        }
    }
    for (int i = 0; i < q; i++)
    {
        printf("%d\n", n[i]);
    }
    return 0;
}