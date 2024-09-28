#include <stdio.h>
int main (){
    int numero,fatorial = 1;

     printf("digito um numero inteiro nao negativo:");
     scanf("%d",&numero);
     if (numero>=0) {
        for (int i = 1; i<= numero; i++){
            fatorial*=i;
         }
        printf("o fatorial de %d e: %d\n",numero,fatorial);
     }   else {
        printf("numero invalido. o fatorial é definido apenas para numero ineteiros nao negativos\n");
     }

   return 0;


}