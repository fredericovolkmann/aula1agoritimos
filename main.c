#include <stdio.h>
#include "main_fatorial.h"

int fatorial (int n){
int acumulador = 1;
for (int i=n;i>=1;i--){
    acumulador= i * acumulador;
}
return acumulador;
}

int main(){
int n;
printf("digite um numero: ");
scanf("%d",&n);
int acumulador=fatorial(n);
printf("%d\n",acumulador);
return 0;
}