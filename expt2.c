#include <stdio.h>
void soma(){
    int n1;
    int n2;
    printf("digite um numero: ");
    scanf("%d",&n1);
    printf("digite um numero: ");
    scanf("%d",&n2);
    double soma = n1 + n2;
    printf("o resultado da soma e %.2f\n",soma);
}