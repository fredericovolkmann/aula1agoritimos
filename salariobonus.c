#include<stdio.h>
int main(){
    double salario_total;
    char vendedor[20];
    double comicao;
    double salario_base;
    double vendas;
 scanf("%s",vendedor);
 scanf("%lf",&salario_base);
 scanf("%lf",&vendas);
comicao = 0.15 * vendas;
salario_total = salario_base + comicao;
printf("TOTAL = R$ %.2f\n",salario_total);
return 0;
}