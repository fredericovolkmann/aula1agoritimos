#include <stdio.h>

int main() {
    int codigo_da_peca1;
    int numero_de_peca1;
    double valor_por_unidade_da_peca1; 
    double valor_total_da_peca1; 

    int codigo_da_peca2;
    int numero_de_peca2;
    double valor_por_unidade_da_peca2;
    double valor_total_da_peca2; 

    // Leitura dos dados
    scanf("%d", &codigo_da_peca1);
    scanf("%d", &numero_de_peca1);
    scanf("%lf", &valor_por_unidade_da_peca1);
    
    scanf("%d", &codigo_da_peca2);
    scanf("%d", &numero_de_peca2);
    scanf("%lf", &valor_por_unidade_da_peca2);

    // Cálculos
    valor_total_da_peca1 = numero_de_peca1 * valor_por_unidade_da_peca1;
    valor_total_da_peca2 = numero_de_peca2 * valor_por_unidade_da_peca2;

    double valor_da_compra = valor_total_da_peca1 + valor_total_da_peca2; 

    // Impressão do resultado
    printf("VALOR A PAGAR: R$ %.2f\n", valor_da_compra);

    return 0;
}





