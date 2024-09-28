#include <stdio.h>
int main(){
    int a;
    int b;
    printf("digite um numero inteiro: ");
    scanf("%d",&a);
    printf("digite um numero inteiro: ");
    scanf("%d",&b);
    double c;
    double d;
    printf("digite um numero fracionado: ");
    scanf("%lf",&c);
    printf("digite um numero fracionado: ");
    scanf("%lf",&d);
    int divisao_inteira = a/b;
    double divisao_fracionada = c/d;
    printf("resultado da divisao inteira e: %.2d\n",divisao_inteira);
    printf("resultado da divisao fracionada e: %.2f\n",divisao_fracionada);
    return 0; 
}